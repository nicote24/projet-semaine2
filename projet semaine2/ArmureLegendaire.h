#pragma once
#include <string>
#include <iostream>
#include<iomanip>


#include "Armure.h"

using namespace std;

class ArmureLegendaire :public Armure
{
public:
	ArmureLegendaire();
	~ArmureLegendaire();

protected:
	string nom;
	int vie;
	int def;
};



