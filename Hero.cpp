#include "Hero.h"



Hero::Hero( std::string gun,
			std::string skills,
			std::string name)

	: Heroes(gun, name,skills)
	  
{
	
}
Hero::Hero(const Hero &hero)
	:Heroes(hero.m_name, hero.m_gun,hero.m_skills)
	
{

}
void Hero::enterHero()
{
	setname();
	setsskills();
	setgun();
}
void Hero::outHero()
{
	std::cout << "\n";
	std::cout << "Имя : " << getname() << "\n";
	std::cout << "Оружие : " << getgun() << "\n";
	std::cout << "Навыки : " << getskills() << "\n";
	std::cout << "\n";
}

Hero::~Hero()
{
}
