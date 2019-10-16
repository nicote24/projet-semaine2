#include "stdafx.h"
#include "Elfe.h"


Elfe::Elfe(string nom) :Race(nom)
{
	race = nom;
	vie = genererVie();
	cha = genererCha();
	def = genererDef();
	att = genererAtt();
}


Elfe::~Elfe()
{
}
