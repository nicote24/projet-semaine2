#pragma once
#include <string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include "Classe.h"
#include "Race.h"
#include "Armure.h"
#include "Arme.h"
#include "Orc.h"
#include "Elfe.h"
#include "Humain.h"
#include "Guerrier.h"
#include  "Assassin.h"
#include "Tank.h"

using namespace std;

class Aventurier
{
public:
	Aventurier();
	~Aventurier();

	//Accessors
	inline const string getNom() const { return this->nom; }
	inline const Race* getRace() const { return this->race; }
	inline const Classe* getClasse() const { return this->classe; }
	inline int getLevel() const { return this->level; }
	inline int getExp() const { return this->exp; }
	inline int getPrix() const { return this->prix; }
	inline int getVie() const { return (maClasse->getVie() + maRace->getVie() + monArmure->getVie()); }
	inline int getAtt() const { return (maClasse->getAtt() + maRace->getAtt() + monArme->getAtt()); }
	inline int getDef() const { return (maClasse->getDef() + maRace->getDef() + monArmure->getDef()); }
	inline int getCha() const { return (maClasse->getCha() + maRace->getCha() + monArme->getCha()); }
	inline string getArme() const { return monArme->getNom(); }
	inline string getArmure() const { return monArmure->getNom(); }

	void getBilan();
	bool verifArmure();
	bool verifArme();
	void AjouterEquipement(Objet* objet);


private:
	Race* race;
	string nom;
	Classe* classe;
	Classe*maClasse;
	Race* maRace;
	Armure*monArmure;
	Arme*monArme;
	Aventurier*monAventurier;

	int level;
	int exp;
	int prix;

	int vie;
	int att;
	int def;
	int cha;
};


