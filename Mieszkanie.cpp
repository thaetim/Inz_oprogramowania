#include "Mieszkanie.h"

unsigned int Mieszkanie::ID_gen = 1;

Mieszkanie::Mieszkanie()
{
	this->ID_mieszkania = ID_gen;
	ID_gen++;
}

Mieszkanie::Mieszkanie(string adres, double wartosc)
{
	this->adres_mieszkania = adres;
	this->wartosc_mieszkania = wartosc;
}

void Mieszkanie::zmienDane(string new_adres,double new_wartosc)
{
	this->adres_mieszkania=new_adres;
	this->wartosc_mieszkania = new_wartosc;
	
}


Mieszkanie::~Mieszkanie()
{
}
