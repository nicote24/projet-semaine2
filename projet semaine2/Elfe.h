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

 int genererVie() { return (rand() % 40) + 25; }; // 25 � 40 VIE
 int genererAtt() { return (rand() % 45) + 35; }; // 35 � 45 ATT
 int genererDef() { return (rand() % 25) + 10; }; // 10 � 25 DEF
 int genererCha() { return (rand() % 25) + 20; }; // 20 � 25 CHA

class Elfe :public Race
{
public:
	Elfe(string nom);
	virtual ~Elfe();

};
