#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
#include<iomanip>


#include "Arme.h"

using namespace std;

class ArmeCommun : public Arme
{
public:
	ArmeCommun();
	~ArmeCommun();

protected:
	string nom;
	int att;
	int cha;
};



