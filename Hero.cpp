#include "Hero.h"



Hero::Hero( std::string gun,
			std::string skills,
			std::string name)

	: m_gun(gun),
	  m_skills(skills),
	  Heroes(name)
{
	
}
Hero::Hero(const Hero &hero)
	:Heroes(hero.m_name),
	 m_gun(hero.m_gun),
	 m_skills(hero.m_skills)
{

}

void Hero::setgun()
{
	std::cout << "Выберите оружие: \t\t\n1.Меч\n2.Лук\n3.Булава";
	int gun;
	while (1)
	{
		std::cin >> gun;
		if ((std::cin.fail()) || (gun<1) || (gun>3))
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\n\t\t\t\tUnknown\n\t\t\t\t";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			switch (gun)
			{
			case 1:
				m_gun =  "Лук";
				break;
			case 2:
				m_gun = "Булава";
				break;
			case 3:
				m_gun = "Меч";
				break;
			}
		}
	}
}
void Hero::setsskills()
{
	std::cout << "Введите основные возможности Героя\n";
	std::string skill;
	std::getline(std::cin, skill);
	m_skills = skill;
}


void Hero::set_gun(std::string s)
{
	m_gun = s;
}
void Hero::set_skills(std::string s)
{
	m_skills = s;
}

std::string Hero::getgun()
{
	return m_gun;
}
std::string Hero::getskills()
{
	return m_skills;
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
