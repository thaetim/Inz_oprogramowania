#include "Umowa.h"

unsigned int Umowa::ID_gen = 1;

Umowa::Umowa()
{
	this->ID_umowy = ID_gen;
	ID_gen++;
}

Umowa::Umowa(string warunki)
{
	this->warunki_umowy = warunki;
}



Umowa::~Umowa()
{
}
