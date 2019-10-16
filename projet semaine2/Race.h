#pragma once
#include <string>
#include <iostream>
#include<iomanip>

using namespace std;

#include "Aventurier.h"

class Race
{
public:
	Race(string nom);
	~Race();

	inline const int getVie() const { return vie; }
	inline const int getAtt() const { return att; }
	inline const int getDef() const { return def; }
	inline const int getCha() const { return cha; }
	inline const string getRace() const { return race; }

protected:
	string race;
	int vie;
	int att;
	int def;
	int cha;

};

