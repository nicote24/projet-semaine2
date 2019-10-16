#pragma once
#include <iostream>;
#include "stdafx.h";
#include <string>;
#include <vector>
#include <list> 
#include "Arme.h"
#include "Aventurier.h"
using namespace std;
class Guilde
{
public:
	Guilde(string nomGuilde);
	~Guilde();

	//acceseurs

	inline int getGold() const { return this->gold; };
	inline int getNiveau() const { return this->niveau; };
	inline string getNom() const { return this->nom; };
	inline list<Aventurier*> getTabAventuriers() const { return aventuriers; };
	Aventurier* getAventurier(int choix);

	//functions

	void AjouterAventurier(Aventurier* aventurier);
	void EnleverAventurier(int choix);
	void AjouterEquipement(int choix, Objet* equipement);
	inline void EnleverGold(int nbGold);
	inline void AjouterGold(int nbGold);
	inline void MonterNiveau();
	void AfficherBilan();
	void AfficherAventurier();

private:
	int niveau,gold;
	string nom;
	list<Aventurier*> aventuriers;
};

