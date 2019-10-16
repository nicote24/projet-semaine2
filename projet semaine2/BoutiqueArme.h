#pragma once
class BoutiqueArme
#include <iostream>;
#include "stdafx.h";
#include <string>;
#include <vector>
#include <list> 
#include "Aventurier.h"
#include "Guilde.h"
#include "Arme.h"
#include "Armure.h"
#include "Objet.h"
{
public:
	BoutiqueArme(Guilde* guilde);
	~BoutiqueArme();

	//fucntion

	void AfficherChoix();
	void AjouterArme(int choixArme, int choixAventurier);
	int getPrixArme(int choix);

private:
	Guilde* guilde;
	list<Objet*> ListeObjet;
};

