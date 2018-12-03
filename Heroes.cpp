#include "Heroes.h"



Heroes::Heroes(std::string name, std::string gun, std::string skills)
	: m_name(name), m_gun(gun),m_skills(skills)
{
};
Heroes::Heroes(const Heroes &heroes)
	: m_name(heroes.m_name),m_gun(heroes.m_gun), m_skills(heroes.m_skills)
{
};
void Heroes::setname()
{
	std::cout << "Введите имя персонажа: \t\t";
	std::string name;
	std::getline(std::cin, name);
	m_name = name;
}
void Heroes::set_name(std::string name)
{
	m_name = name;
}
std::string Heroes::getname()
{
	return m_name;
}
Heroes::~Heroes()
{
}
std::string Heroes::getgun()
{
	return m_gun;
}
void Heroes::set_gun(std::string s)
{
	m_gun = s;
}
void Heroes::setgun()
{
	std::cout << "Выберите оружие: \t\t\n1.Меч\n2.Лук\n3.Булава";
	int gun;
	bool flag = 0;
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
				m_gun = "Лук";
				flag = 1;
				break;
			case 2:
				m_gun = "Булава";
				flag = 1;
				break;
			case 3:
				m_gun = "Меч";
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			flag = 0;
			break;
		}
	}
}


void Heroes::setsskills()
{
	std::cout << "Введите основные возможности Героя\n";
	std::string skill;
	std::getline(std::cin, skill);
	m_skills = skill;
}



void Heroes::set_skills(std::string s)
{
	m_skills = s;
}


std::string Heroes::getskills()
{
	return m_skills;
}