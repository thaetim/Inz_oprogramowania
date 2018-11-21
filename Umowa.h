#pragma once
#include "MainHeader.h"

class Umowa
{
protected:
	static unsigned int ID_gen;
	unsigned int ID_umowy;
	string warunki_umowy;
public:
	Umowa();
	Umowa(string warunki);
	~Umowa();
};

