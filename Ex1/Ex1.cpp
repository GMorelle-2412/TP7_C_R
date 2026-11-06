#include <iostream>
#include "pile_entier.h"

#define val_data 20

using namespace std;

int main() {
	int select = 0;
	int valeur = 0;
	int nb_sauve = 0;

	pile_entier data(val_data);

	while (true) {

		cout << "Voulais vous empiler (tapez : 1), depiler (tapez : 2) pleine (tapez : 3) ou vide (tapez : 4)\n";
		cin >> select;
		cout << "\n";

		if (select == 1) {
			if (nb_sauve == val_data) { 
				cout << "Il n'y a plus de place pour l'empilation\n"; 
				continue;
			}

			cout << "Choisire un nombre pour l'empilation : ";
			cin >> valeur;
			cout << "\n";

			nb_sauve++;

			data.empile(valeur);
		}

		else if (select == 2) {
			if (data.depile() == 1) {
				cout << "Vous ne pouver pas depiler car la pile n'a pas de valeur\n";
			}
			else {
				nb_sauve--;
			}
		}

		else if (select == 3) { 
			if (data.pleine() == 1) { 
				cout << "La pile est deja pleine\n"; 
			} 
			else {
				nb_sauve = val_data; 
			}
		}

		else if (select == 4) {
			if (data.vide() == 1) { 
				cout << "La pile est deja vide\n"; 
			}
			else {
				nb_sauve = 0;
			}
		}

		else cout << "\nRecomencer svp.\n";
	}

	return 0;
}