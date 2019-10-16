#include "stdafx.h"
#include "Aventurier.h"


string const tabNom[] = { "Over9000", "ErenalArage", "PolleWahqueur" };


Arme arme;
Armure armure; //?

inline int genererLvl() { return (rand() % 6) + 1; }; // 1 à 5


Aventurier::Aventurier()
{
	srand(time(NULL));
	int randomiseur = 0;
	randomiseur = (rand() % 3);
	if (randomiseur == 0)
		race = new Orc("Orc");
	else if (randomiseur == 1)
		race = new Elfe("Elfe");
	else
		race = new Humain("Humain");

	randomiseur = (rand() % 3);
	if (randomiseur == 1)
		classe = new Guerrier();
	else if (randomiseur == 2)
		classe = new Assassin();
	else
		classe = new Tank();

	this->nom = tabNom[rand() % 3];
	this->level = genererLvl();
	this->exp = 0;
	this->prix = level;
	this->att = getAtt();
	this->vie = getVie();
	this->def = getDef();
	this->cha = getCha();
}

Aventurier::~Aventurier()
{
}

void Aventurier::getBilan()
{
	cout << "Nom : " << nom << endl;
	cout << "Race : " << race << endl;
	cout << "Classe : " << classe << endl;
	cout << "Level : " << level << endl;
	cout << "EXP : " << exp << endl;
	cout << "Prix : " << prix << endl;
	cout << "Vie : " << vie << endl;
	cout << "Attaque : " << att << endl;
	cout << "Defense : " << def << endl;
	cout << "Chance : " << cha << endl;

	if (verifArme() == true)
		cout << "Arme : " << Aventurier::getArme << endl;

	if (verifArmure() == true)
		cout << "Armure : " << Aventurier::getArmure << endl;
}

bool Aventurier::verifArme() //?
{
	bool armeEquipee = false;

	do
	{
		if (Arme::getAtt != 0)
		{
			armeEquipee = true;
		}

	} while (armeEquipee == false);

	return armeEquipee;

}

bool Aventurier::verifArmure() //?
{
	bool armureEquipee = false;

	do
	{
		if (Armure::getDef != 0)
		{
			armureEquipee = true;
		}

	} while (armureEquipee == false);

	return armureEquipee;
}

void Aventurier::AjouterEquipement(Objet* objet) 
{
	if (objet->getDef() > 0)
	{
		Armure *armure1 = (Armure *)&objet;
		armure = *armure1;
	}
	else 
	{
		Arme *arme1 = (Arme *)&objet;
		arme = *arme1;
	}
}
