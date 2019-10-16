#include "stdafx.h"
#include "Humain.h"



Humain::Humain(string nom) :Race(nom)
{
	race = nom;
	vie = genererVie();
	att = genererAtt();
	def = genererDef();
	cha = genererCha();
}


Humain::~Humain()
{
}
