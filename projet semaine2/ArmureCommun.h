#pragma once
#include <string>
#include <iostream>
#include<iomanip>


#include "Armure.h"

using namespace std;

class ArmureCommun :public Armure
{
public:
	ArmureCommun();
	~ArmureCommun();

protected:
	string nom;
	int vie;
	int def;
};

