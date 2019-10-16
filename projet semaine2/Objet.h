#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
#include<iomanip>
#include "Objet.h"
using namespace std;
class Objet
{
public:
	Objet();
	~Objet();

	inline const int& getAtt() const { return att; }
	inline const int& getCha() const { return cha; }
	inline const int& getVie() const { return vie; }
	inline const int& getDef() const { return def; }
	inline const int& getPrix() const { return prix; }
	inline const string& getNom() const { return nom; }

	//fucntion

	void getBilan();

protected:
	string nom;
	int def;
	int vie;
	int att;
	int cha;
	int prix;
};

