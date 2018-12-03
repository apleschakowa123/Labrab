#pragma once
#include "Heroes.h"
class Evil :
	public Heroes
{
private:
	std::string m_zlo;
	std::string m_home;
public:
	Evil(std::string name = "", std::string gun = "", std::string skills = "", std::string zlo = "", std::string home = "");
	Evil(const Evil &evil);
	void enterEvil();
	void outEvil();
	void setzlo();
	void sethome();
	void set_zlo(std::string zlo);
	void set_home(std::string home);
	std::string gethome();
	std::string getzlo();
	~Evil();
};

