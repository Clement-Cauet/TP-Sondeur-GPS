//*********************************************************************************************
//* Programme : Sondeur.cpp								Date : 19/10/2021
//*														Dernière MAJ : 21/10/2021
//*--------------------------------------------------------------------------------------------
//*Programmeurs :	CAUET Clément							Classe : BTSSN2
//*					DUVAL Kyllian
//*					LIENARD Romain
//*--------------------------------------------------------------------------------------------
//*
//* BUT : Permet d'ouvrir l'IHM.
//*
//*********************************************************************************************

#include "Sondeur.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sondeur w;
    w.show();
    return a.exec();
}
