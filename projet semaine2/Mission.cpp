#include "stdafx.h"
#include "Mission.h"
#include <iostream>
#include <vector>
#include<ctime>
#include"Aventurier.h"
using namespace std;

Mission::Mission(string nom, int niveauRecu)
{
	nomMission = nom;
	niveauTotal = niveauRecu;

}


Mission::~Mission()
{
}

void Mission::AfficherBilan()
{
	cout << "La guilde envois en mission les aventuriers suivant : " << endl;
	cout << "------------------------------------------------------" << endl;
	for (int i = 0; i < aventuriers.size() - 1;i++)
	{
		cout << i << ":  " << aventuriers << endl;
	}
	cout << "------------------------------------------------------" << endl;
}

list<Aventurier*> Mission::LancerAffrontement(Guilde* guilde)
{

	int chanceMourir = 0;
	int xpdiviser = 0;

	if (niveauRecommande > niveauTotal)
	{
		chanceMourir = (50 + ((niveauRecommande - niveauTotal) * 5));
	}
	else if (niveauTotal > niveauRecommande)
	{
		chanceMourir = (50 - ((niveauTotal - niveauRecommande) * 5));
	}
	else
		chanceMourir = 50;

	for(int i=0; i<aventuriers.size()-1;i++)
	{
		list<Aventurier*>::iterator it = aventuriers.begin();
		std::advance(it, i - 1);
		int nombre=genererNb(0, 100);
		
		if (nombre > chanceMourir) 
		{
			aventuriers.erase(it);
			nbMorts++;
		}
		else 
		{
			*it.MonterNiveau();
		}
	}
	if(aventuriers.size()<1)
	{
		guilde->AjouterGold(recompense);
		fini = true;
	}
	return aventuriers;
}

inline int genererNb(int min, int max) { return(rand() % (max - min + 1)) + min; }

