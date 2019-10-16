#include "stdafx.h"
#include "Orc.h"


Orc::Orc(string nom) :Race(nom)
{
	vie = genererVie();
	cha = genererCha();
	def = genererDef();
	att = genererAtt();
}


Orc::~Orc()
{
}

