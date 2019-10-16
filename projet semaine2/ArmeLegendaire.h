#pragma once
#include <string>
#include <iostream>
#include<iomanip>


#include "Arme.h"

using namespace std;

class ArmeLegendaire :public Arme
{
public:
	ArmeLegendaire();
	~ArmeLegendaire();

protected:
	string nom;
	int att;
	int cha;
};
