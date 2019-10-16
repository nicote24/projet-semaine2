#pragma once
#include <iostream>;
#include "stdafx.h";
#include <string>;
#include <list>
#include "Guilde.h"
#include "Mission.h"
#include "Boutique.h"
#include "BoutiqueArme.h"

using namespace std;

class Jeu
{
public:
	Jeu(string nomGuilde);
	~Jeu();
	
	//fucntions

	void AfficherMenu();
	void LancerBoutique();
	void lancerMission();
	void AfficherMissions();
	void LancerBoutiqueObjet();
	bool finPartie();
	void VoirInfoGuilde();

private:
	Guilde* guilde;
	list<Mission*> listeMissions;
};

