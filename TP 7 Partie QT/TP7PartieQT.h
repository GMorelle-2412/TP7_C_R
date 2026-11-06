#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TP7PartieQT.h"

class TP7PartieQT : public QMainWindow
{
    Q_OBJECT

public:
    TP7PartieQT(QWidget *parent = nullptr);
    ~TP7PartieQT();

private:
    Ui::TP7PartieQTClass ui;

private slots:
    void affiche_pile();
    void bouton_empile();
    void bouton_depile();
    void bouton_pleine();
    void bouton_vide();
};

