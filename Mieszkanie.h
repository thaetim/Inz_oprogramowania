#pragma once
#include "MainHeader.h"

class Mieszkanie
{
protected:
	static unsigned int ID_gen;
	unsigned int ID_mieszkania;
	string adres_mieszkania;
	double wartosc_mieszkania;
public:
	Mieszkanie();
	Mieszkanie(string adres, double wartosc);
	void zmienDane(string new_adres,double new_wartosc);
	~Mieszkanie();
};

