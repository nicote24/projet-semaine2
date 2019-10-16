#include "stdafx.h"
#include "BoutiqueArme.h"


BoutiqueArme::BoutiqueArme(Guilde* guilde)
{
	this->guilde = guilde;
	for (int i = 0; i < 20;i++)
	{
		if(i<11)
			ListeObjet.push_back(new Arme());
		else
			ListeObjet.push_back(new Armure());
	}
}


BoutiqueArme::~BoutiqueArme()
{
}

void BoutiqueArme::AfficherChoix()
{
	list<Objet*>::iterator it;
	cout << "BOUTIQUE D'ARME" << endl;
	for (it = ListeObjet.begin(); it != ListeObjet.end(); it++)
	{
		(*it)->getBilan();
	}
}

void BoutiqueArme::AjouterArme(int choixArme,int choixAventurier) 
{
	list<Objet*>::iterator it = ListeObjet.begin();
	std::advance(it, choixArme - 1);

	if (guilde->getGold > (*it)->getPrix())
	{
		guilde->EnleverGold((*it)->getPrix());
		guilde->AjouterEquipement(choixAventurier, (*it));
		cout << "Vous avez ajouter l'aventurier" << (*it)->getNom() << endl;
	}
	else
		cout << "Vous n'avez pas assez d'argent pour pouvoir acheter cet aventurier" << endl;
}

int BoutiqueArme::getPrixArme(int choix)
{
	list<Objet*>::iterator it = ListeObjet.begin();
	std::advance(it, choix - 1);
	return (*it)->getPrix();
}



