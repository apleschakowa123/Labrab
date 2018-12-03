#pragma once
#include "Heroes.h"
class Monstr :
	public Heroes
{
private:
	std::string m_wiev;
public:
	Monstr(std::string name = "",  std::string wiev = "");
	Monstr(const Monstr &monstr);
	void setwiev();
	void set_wiev(std::string wiev);
	std::string getwiev();
	void enterMonstr();
	void outMonstr();

	~Monstr();
};

