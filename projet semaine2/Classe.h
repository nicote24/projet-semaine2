#pragma once
#include <string>
#include <iostream>
#include<iomanip>

using namespace std;

#include "Aventurier.h"

class Classe
{
public:
	Classe();
	~Classe();

	inline const int& getVie() const { return vie; }
	inline const int& getAtt() const { return att; }
	inline const int& getDef() const { return def; }
	inline const int& getCha() const { return cha; }
	inline const string& getClasse() const { return classe; }

protected:
	string classe;
	int vie;
	int att;
	int def;
	int cha;
};

