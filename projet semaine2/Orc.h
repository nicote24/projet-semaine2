#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
#include<iomanip>

#include "Race.h"

using namespace std;

inline int genererVie() { return (rand() % 65) + 50; }; // 50 à 65 VIE
inline int genererAtt() { return (rand() % 25) + 15; }; // 15 à 25 ATT
inline int genererDef() { return (rand() % 40) + 30; }; // 30 à 40 DEF
inline int genererCha() { return (rand() % 10) + 5; }; // 5 à 10 CHA

class Orc :public Race
{
public:
	Orc(string nom);
	virtual ~Orc();

private:
	int vie;
	int att;
	int def;
	int cha;

};



