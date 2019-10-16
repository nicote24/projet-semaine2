#include "stdafx.h"
#include "Boutique.h"

Boutique::Boutique(Guilde* guilde)
{
	this->guilde = guilde;
	for (int i = 0; i < 20;i++) 
	{
		ListeAventurier.push_back(new Aventurier());
	}
}


Boutique::~Boutique()
{
}

void Boutique::AfficherChoix() 
{
	cout << "BOUTIQUE" << endl;
	list<Aventurier*>::iterator it;
	for (it = ListeAventurier.begin(); it != ListeAventurier.end(); it++)
	{
		(*it)->getBilan();
	}
}
void Boutique::AjouterAventurier(int choix) 
{	
	list<Aventurier*>::iterator it = ListeAventurier.begin();
	std::advance(it, choix - 1);

	if (guilde->getGold < (*it)->getPrix())
	{
		guilde->EnleverGold((*it)->getPrix());
		guilde->AjouterAventurier((*it));
		cout << "Vous avez ajouter l'aventurier" << (*it)->getNom() << endl;
	}
	else
		cout << "Vous n'avez pas assez d'argent pour pouvoir acheter cet aventurier" << endl;
}

void Boutique::VendreAventurier(int choix)
{
	guilde->EnleverAventurier(choix);
	guilde->AjouterGold((guilde->getAventurier(choix)->getPrix()));
	cout << "Vous avez vendu votre aventurier" << endl;
}





