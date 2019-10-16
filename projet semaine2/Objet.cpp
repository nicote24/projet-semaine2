#include "stdafx.h"
#include "Objet.h"


Objet::Objet()
{
	att;
	def;
	vie;
	cha;
	prix;
}


Objet::~Objet()
{
}

void Objet::getBilan()
{
	cout << "Nom : " << nom << endl;
	cout << "Prix : " << prix << endl;
	cout << "Vie : " << vie << endl;
	cout << "Attaaque : " << att << endl;
	cout << "Defense : " << def << endl;
	cout << "Chance : " << cha << endl;
}


