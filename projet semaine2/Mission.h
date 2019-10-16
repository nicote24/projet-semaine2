#pragma once
#include <iostream>;
#include "stdafx.h";
#include <string>;
#include <list>
#include "Aventurier.h"
#include "Guilde.h"
using namespace std;
class Mission
{
public:
	Mission(string nom, int niveauRecu);
	~Mission();
	void AfficherBilan();
	list<Aventurier*> LancerAffrontement(Guilde* guilde);
	inline bool getFini() const { return fini; }

private:
	string nomMission;
	int niveauMission, niveauRecommande, niveauTotal, recompense, nbMorts;
	list<Aventurier*> aventuriers;
	inline int genererNb(int min, int max);
	bool fini;
};

