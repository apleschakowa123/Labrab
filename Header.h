#include <fstream>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

void pust(int a)
{
	if (a == 0)
	{
		std::cout << "\n\t\t\tѕусто\n";
	}
}


int mistake()
{
	int i;
	while (1)
	{
		std::cin >> i;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\n¬веден неверный символ\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return i;
			break;
		}
	}
}


int mistake_(int a)
{
	int i = 0;
	while (1)
	{
		std::cin >> i;
		if (i == -1)
		{
			return i;
			break;
		}
		if ((std::cin.fail()) || (i<0) || (i>a))
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\n¬веден неверный символ\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return i;
			break;
		}
	}
}
