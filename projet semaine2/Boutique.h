#pragma once
#include <iostream>;
#include "stdafx.h";
#include <string>;
#include <vector>
#include <list> 
#include "Aventurier.h"
#include "Guilde.h"
#include "Arme.h"
class Boutique
{
public:
	Boutique(Guilde* guilde);
	~Boutique();

	//fucntion
	void VendreAventurier(int choix);
	void AfficherChoix();
	void AjouterAventurier(int choix);

private:
	Guilde* guilde;
	list<Aventurier*> ListeAventurier;

};

