#pragma once
#include <string>
#include <iostream>
class Heroes
{
protected: 
	std::string m_name;
	std::string m_gun;
	std::string m_skills;

public:
	Heroes(std::string name="", std::string gun = "", std::string skills="");
	Heroes(const Heroes &heroes);
	void setname();
	void set_name(std::string name);
	void set_gun(std::string s);
	void setgun();
	std::string getgun();
	std::string getname();
	std::string getskills();
	void set_skills(std::string s);
	void setsskills();
	virtual ~Heroes();
};

