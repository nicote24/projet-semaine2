#include "stdafx.h"
#include "Guilde.h"


Guilde::Guilde(string nomGuilde)
{
	nom = nomGuilde;
	gold = 5;
	niveau = 1;
}


Guilde::~Guilde()
{

}

Aventurier* Guilde::getAventurier(int choix)
{
	list<Aventurier*>::iterator it = aventuriers.begin();
	std::advance(it, choix - 1);
	return (*it);
}

void Guilde:: AjouterAventurier(Aventurier* aventurier)
{
	if (aventuriers.size < 6)
		cout << "impossible d'ajouter plus d'aventuriers" << endl;
	else 
	{
		aventuriers.push_back(aventurier);
		cout << "l'aventurier : " << aventurier->getNom() << " a été ajoutée";
	}
}

void Guilde::AjouterEquipement(int choix,Objet* equipement)
{
	list<Aventurier*>::iterator it = aventuriers.begin();
	std::advance(it, choix - 1);
	if((*it)->getCha()>0)
		(*it)->AjouterEquipement(equipement);
	else
		(*it)->AjouterEquipement(equipement);
	cout << "l'equipement : " << equipement->getNom() << " a été ajouter a l'aventurier : " << (*it)->getNom() << endl;
}

inline void Guilde::AjouterGold(int nbGold) 
{
	gold += nbGold;
}
inline void Guilde::EnleverGold(int nbGold)
{
	gold -= nbGold;
}
inline void Guilde::MonterNiveau() 
{
	niveau++;
}

void Guilde::AfficherBilan()
{
	cout << "________________________________________" << endl;
	cout << nom << " | niveau :" << niveau << " | Gold : " << gold << endl;
	cout << endl;
	list<Aventurier*>::iterator it = aventuriers.begin();
	for (int i = 0;i < aventuriers.size();i++) 
	{
		std::advance(it, i - 1);
		cout << "AVENTURIER DE LA GUILDE" << endl;
		cout << "----------------------------------" << endl;
		(*it)->getBilan();
	}
	cout << "______________________________________"<< endl;
	cout << "fin du rapport" << endl;
}

void Guilde::EnleverAventurier(int choix)
{
	list<Aventurier*>::iterator it = aventuriers.begin();
	std::advance(it, choix-1);
	aventuriers.erase(it);
}

void Guilde::AfficherAventurier() 
{
	list<Aventurier*>::iterator it = aventuriers.begin();
	for (int i = 0;i < aventuriers.size();i++)
	{
		std::advance(it, i - 1);
		cout << "AVENTURIER DE LA GUILDE" << endl;
		cout << "----------------------------------" << endl;
		(*it)->getBilan();
	}
}