// projet semaine2.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "Mission.h"
#include <iostream>
#include <vector>
#include<ctime>
#include"Jeu.cpp"
using namespace std;


int main()
{
	cout << "bienvenue nouveau joueur dans Guild Rising" << endl;
	cout << "veuillez entrez le nom de la guilde que vous souhaitez créer !" << endl;
	string nomGuilde;
	cin >> nomGuilde;
	auto game = new Jeu(nomGuilde);
	bool finPartie = false;
	
	do 
	{
		int choixMode = 0;
		game->AfficherMenu();
		cin >> choixMode;
		try
		{
			switch (choixMode) 
			{
			case 1: game->VoirInfoGuilde();
			case 2: game->LancerBoutique();
			case 3: game->lancerMission();
			case 4: game->LancerBoutiqueObjet();
			case 5:finPartie = true;
			}
			if (game->finPartie())
				finPartie = true;
		}
		catch(int e)
		{
			cout << "Veuillez entrez un chiffre valide !!!!!!!" << endl;
		}
	} 
	while (finPartie==false);

    return 0;
}

