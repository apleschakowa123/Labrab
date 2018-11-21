#pragma once
#include "Heroes.h"
class Hero :
	public Heroes
{
private:
	std::string m_gun;
	std::string m_skills;
public:
	Hero(std::string name = "", std::string gun = "",  std::string skills = "");
	Hero(const Hero &hero);
	~Hero();

	void setgun();				
	void setsskills();

	void set_gun(std::string s);
	void set_skills(std::string s);
					
	std::string getgun();
	std::string getskills();

	void enterHero();
	void outHero();
};

