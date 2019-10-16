#pragma once
#include <string>
#include <iostream>
#include<iomanip>


#include "Armure.h"

using namespace std;

class ArmureRare : public Armure
{
public:
	ArmureRare();
	~ArmureRare();

protected:
	string nom;
	int vie;
	int def;
};