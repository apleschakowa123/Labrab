#pragma once
#include "Heroes.h"
class Hero :
	public Heroes
{
public:
	Hero(std::string name = "", std::string gun = "",  std::string skills = "");
	Hero(const Hero &hero);
	~Hero();
	void enterHero();
	void outHero();
};

