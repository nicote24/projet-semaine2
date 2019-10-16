#include "stdafx.h"
#include "Jeu.h"




Jeu::Jeu(string nomGuilde)
{
	guilde = new Guilde(nomGuilde);
	int nivMission =5;
	string const Noms[20] = { "Debut a tout", "La foret déomniaque","Eric le terrifant","Michel le sage Attaque","Le chateau de Xavier","Lexercice de Lucie","Longue Epreuve de Lina","Lattaque frontale de Jimmy,","PatPatroll est kidnappé","Celui qui tire les ficelles est vincent","les raison deriere ce choix","Pourquoi avoir controller nos proffeesseurs ?","y a til encore de l'espoire ?","Encore un petit effort","ou s'est til enfuie ?"," Sur les traces de vincent","Mourir ou réussir","le combat final commence","La mort de notre bien aimé","le coup de grace"};

	for (int i = 0;i < 20;i++) 
	{
		if (i > 5)
			nivMission = 10;
		else if (i > 10)
			nivMission = 15;
		else if (i > 15)
			nivMission = 20;

		listeMissions.push_back(new Mission(Noms[i],nivMission));
	}
}


Jeu::~Jeu()
{
}

void Jeu::AfficherMenu() 
{
	cout << "MENU PRINCIPALE" << endl;
	cout << "(1) Voir les information de la guilde" << endl;
	cout << "(2) Boutique" << endl;
	cout << "(3) Missions" << endl;
	cout << "(4) Recruter" << endl;
	cout << "(5) Quitter le jeu" << endl;
}

void Jeu::LancerBoutique() 
{
	auto boutique = new Boutique(guilde);
	int choixMenu = 0;

	do 
	{
		cout << "(1) Pour acheter ou vendre / (2) pour quitter" << endl;
		cin >> choixMenu;
		cout << "(1) pour achter/ (2) pour vendre " << endl;
		int choix = 0;
		cin >> choix;

		boutique->AfficherChoix();

		if (choix == 1) 
		{
			cout << "Selectionner l'aventurier que vous désirez acheter" << endl;
			cin >> choix;
			boutique->AjouterAventurier(choix);
		}
		else 
		{
			cout << "Selectionner l'aventurier que vous désirez vendre" << endl;
			cin >> choix;
			boutique->VendreAventurier(choix);
		}
	} while (choixMenu != 2);
}
void Jeu::LancerBoutiqueObjet() 
{
	auto boutique = new BoutiqueArme(guilde);
	int choixMenu = 0;

	boutique->AfficherChoix();

	do
	{
		cout << "(1) pour quitter / (2) Pour acheter un objet" << endl;
		cin >> choixMenu;

		int choixObjet = 0, choixAventurier = 0;

		boutique->AfficherChoix();

		cout << "quel objet voulez vous acheter ?" << endl;
		cin >> choixObjet;
		cout << "A quel aventurier voulez vous l'ajouter ?" << endl;
		cin >> choixAventurier;

		guilde->EnleverGold(boutique->getPrixArme(choixObjet));
		boutique->AjouterArme(choixObjet, choixAventurier);
		

	} while (choixMenu != 2);
}

void Jeu::lancerMission() 
{
	int choixMission = 0, choixAventurier = 0, nbAventurier = 0, niveauTotal = 0;

	AfficherMissions();
	list<Aventurier*> aventurierEnvoyee;
	cout << "------------------------------" << endl;
	cout << "------------------------------" << endl;
	cout << "quels missions desirez vous effectuer?" << endl;
	cin >> choixMission;

	guilde->AfficherAventurier();
	cout << "------------------------------" << endl;
	cout << "------------------------------" << endl;
	cout << "combiens d'aventurier voulez vous envoyer ?" << endl;
	cin >> nbAventurier;
	cout << "" << endl;
	cout << "quel aventurier voulez vous envoye?" << endl;
	for (int i = 0;i > nbAventurier;i++) 
	{
		cin >> choixAventurier;
		aventurierEnvoyee.push_back(guilde->getAventurier(choixAventurier));
		guilde->EnleverAventurier(choixAventurier);
	}
	list<Mission*>::iterator it = listeMissions.begin();
	std::advance(it, choixMission - 1);

	list <Aventurier*> aventurierRevenue=(*it)->LancerAffrontement(guilde);
	list<Aventurier*>::iterator it2;

	for (it2 = aventurierRevenue.begin(); it2 != aventurierRevenue.end(); it++)
	{
		guilde->AjouterAventurier((*it2));
	}
	
		if ((*it)->getFini())
		listeMissions.erase(it);
}

void Jeu::AfficherMissions() 
{
	int cpt = 0;
	list<Mission*>::iterator it;
	for (it = listeMissions.begin(); it != listeMissions.end(); it++)
	{
		cpt++;
		cout << "VOICI LES MISSIONS DISPONIBLES";
		cout << "----------------------------------------------------" << endl;
		cout << "(" <<cpt<<")" << endl;
		(*it)->AfficherBilan();
	}
}

bool Jeu::finPartie() 
{
	if (guilde->getGold() < 1 && guilde->getTabAventuriers().size()<1)
		return true;
	if (listeMissions.size() < 1)
		return true;
}

void Jeu::VoirInfoGuilde() 
{
	guilde->AfficherBilan();
}


