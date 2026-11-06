#include "pile_entier.h"
#include <iostream>

using namespace std;

pile_entier::pile_entier(int taille) {
	this->pile = new int[taille];
	this->taille = taille;
	this->hauteur = 0;
}

void pile_entier::empile(int valeur) {
	this->pile[this->hauteur] = valeur;
	this->hauteur++;

	for (int i = 0; i < this->hauteur; i++) {
		cout << "|" << pile[i] << "|";
	}

	cout << "\n\n";
}

int pile_entier::depile() {
	if (this->hauteur == 0)return 1;

	this->pile[this->hauteur] = 0;
	this->hauteur--;

	for (int i = 0; i < this->hauteur; i++) {
		cout << "|" << pile[i] << "|";
	}

	cout << "\n\n";

	return 0;
}

int pile_entier::pleine() {
	if (this->hauteur == this->taille)return 1;

	for (int i = this->hauteur; i < this->taille; i++) {
		this->pile[i] = 1;
	}

	this->hauteur = this->taille;

	for (int i = 0; i < this->hauteur; i++) {
		cout << "|" << pile[i] << "|";
	}

	cout << "\n\n";

	return 0;
}

int pile_entier::vide() {
	if (this->hauteur == 0)return 1;

	for (int i = this->hauteur; i > 0; i--) {
		this->pile[i] = 0;
	}

	this->hauteur = 0;

	for (int i = 0; i < this->hauteur; i++) {
		cout << "|" << pile[i] << "|";
	}

	cout << "\n\n";

	return 0;
}

pile_entier::~pile_entier() {
	delete this->pile;
}