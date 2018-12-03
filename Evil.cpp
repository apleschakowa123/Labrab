#include "Evil.h"



Evil::Evil(std::string gun,
	std::string skills,
	std::string name,
	std::string zlo,
	std::string home
	): Heroes(gun, name, skills), m_home(home),m_zlo(zlo)

{

}
Evil::Evil(const Evil &evil)
	: Heroes(evil.m_name, evil.m_gun, evil.m_skills),
	m_home(evil.m_home), m_zlo(evil.m_zlo)
{

}
void Evil::setzlo()
{
	std::cout << "Введите зло: \t\t";
	std::string zlo;
	std::getline(std::cin, zlo);
	m_zlo =zlo;
}
void Evil::sethome()
{
	std::cout << "Введите дом: \t\t";
	std::string house;
	std::getline(std::cin, house);
	m_home = house;
}
void Evil::set_zlo(std::string zlo)
{
	m_zlo = zlo;
}
void Evil::set_home(std::string home)
{
	m_home = home;
}
std::string Evil::gethome()
{
	return m_home;
}
std::string Evil::getzlo()
{
	return m_zlo;
}
void Evil::enterEvil()
{
	setname();
	setsskills();
	setgun();
	setzlo();
	sethome();
}

void Evil::outEvil()
{
	std::cout << "\n";
	std::cout << "Имя : " << getname() << "\n";
	std::cout << "Оружие : " << getgun() << "\n";
	std::cout << "Навыки : " << getskills() << "\n";
	std::cout << "Зло : " << getzlo() << "\n";
	std::cout << "Дом : " << gethome() << "\n";
	std::cout << "\n";
}



Evil::~Evil()
{
}
