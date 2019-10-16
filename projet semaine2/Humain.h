#pragma once
#include "stdafx.h"
#include <iostream>
#include <cctype>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <ctime>

#include "Race.h"

using namespace std;

inline int genererVie() { return (rand() % 50) + 35; }; // 35 à 50 VIE
inline int genererAtt() { return (rand() % 35) + 25; }; // 25 à 35 ATT
inline int genererDef() { return (rand() % 30) + 20; }; // 20 à 30 DEF
inline int genererCha() { return (rand() % 20) + 10; }; // 10 à 20 CHA

class Humain :public Race
{
public:
	Humain(string nom);
	virtual ~Humain();

};
