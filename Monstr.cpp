#include "Monstr.h"



Monstr::Monstr(std::string name, std::string wiev ):
	Heroes(name), m_wiev(wiev)
{

}
Monstr::Monstr(const Monstr &monstr):
	Heroes(monstr.m_name),m_wiev(monstr.m_wiev)
{

}
void Monstr::setwiev()
{
	std::cout << "Введите внешний вид: \t\t";
	std::string zlo;
	std::getline(std::cin, zlo);
	m_wiev = zlo;
}
void Monstr::set_wiev(std::string wiev)
{
	m_wiev = wiev;
}

std::string Monstr::getwiev()
{
	return m_wiev;
}
void Monstr::enterMonstr()
{
	setname();
	setwiev();
}
void Monstr::outMonstr()
{
	std::cout << "\n";
	std::cout << "Имя : " << getname() << "\n";
	std::cout << "Вид : " << getwiev() << "\n";
	std::cout << "\n";
}

Monstr::~Monstr()
{
}
