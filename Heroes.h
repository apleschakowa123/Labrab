#pragma once
#include <string>
#include <iostream>
class Heroes
{
protected: 
	std::string m_name;
public:
	Heroes(std::string name="");
	Heroes(const Heroes &heroes);
	void setname();
	void set_name(std::string name);
	std::string getname();
	virtual ~Heroes();
};

