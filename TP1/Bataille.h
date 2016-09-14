#pragma once
#include "Carte.h"
#include "Joueur.h"
#include <algorithm>
#include <iostream>
#include <string>

typedef unsigned int uint;
typedef const uint cuint;



class Bataille
{
	Joueur _joueur1;
	Joueur _joueur2;
public:
	void distribue(std::istream& name);
	uint joue();
	Bataille(std::istream& name, const std::string& j1, const std::string& j2);
	~Bataille();
};

