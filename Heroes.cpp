#include "Heroes.h"



Heroes::Heroes(std::string name)
	: m_name(name)
{
};
Heroes::Heroes(const Heroes &heroes)
	: m_name(heroes.m_name)
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
