#pragma once
#include <string>
#include <iostream>
#include<iomanip>


#include "Arme.h"

using namespace std;

class ArmeRare :public Arme
{
public:
	ArmeRare();
	~ArmeRare();

protected:
	string nom;
	int att;
	int cha;
};

