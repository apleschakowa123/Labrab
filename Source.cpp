#include "Evil.h"
#include "Hero.h"
#include "Heroes.h"
#include "Monstr.h"
#include "Keeper.h"
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
			std::cout << "\n������ �������� ������\n";
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
			std::cout << "\n������ �������� ������\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return i;
			break;
		}
	}
}

int f_menu()
{
	std::cout << "\n\n1) ����� \n2) ������\n3) �������\n4) �����\n\n";
	return(mistake());
}

int hero_menu()
{
	std::cout << "\t1) �������� ����� \n\t2) ������� ����� \n\t3) �������� ���� ������\n\t4) �������� �����\n\t5) �����\n\n\t";
	return(mistake());
}

int evil_menu()
{
	std::cout << "\t1) �������� ������ \n\t2) ������� ������� \n\t3) ������� ���� �������\n\t4) ��������� ������\n\t5) �����\n\n\t";
	return(mistake());
}

int monstr_menu()
{
	int i{ 0 };
	std::cout << "\t1) �������� ������� \n\t2) ������� ������� \n\t3) ������� ��������\n\t4) �������� �������\n\t5) �����\n\n\t";
	return(mistake());
}



int main()
{
	setlocale(LC_ALL, "Russian");
	int menu = 0;
	bool flag = 0;
	Keeper *hero_1 = new Keeper;
	std::cout << "������������ � ���� ���� ������. �������� ������\n\n\n";
	hero_1->load();
	while (1)
	{
		menu = f_menu();
		switch (menu)
		{
		case 1:
			while (1)
			{
				menu  = hero_menu();
				switch (menu)
				{
				case 1:
					hero_1->addHero();
					break;
				case 2:
					hero_1->delHero();
					break;
				case 3:
					hero_1->printallHero();
					break;
				case 4:
					hero_1->editHero();
					break;
				case 5: flag = true; break;
				default: std::cout << "\n������ �������� ������\n";
				}
				if (flag)
				{
					flag = false;
					break;
				}
			}
			break;
		case 2:
			while (1)
			{
				menu = evil_menu();
				switch (menu)
				{
				case 1:
					hero_1->addHero();
					break;
				case 2:
					hero_1->delHero();
					break;
				case 3:
					hero_1->printallHero();
					break;
				case 4:
					hero_1->editHero();
					break;
				case 5: flag = true; break;
				default: std::cout << "\n������ �������� ������\n";
				}
				if (flag)
				{
					flag = false;
					break;
				}
			}
			break;
		case 3:
			while (1)
			{
				menu = monstr_menu();
				switch (menu)
				{
				case 1:
					hero_1->addEvil();
					break;
				case 2:
					hero_1->delEvil();
					break;
				case 3:
					hero_1->printallEvil();
					break;
				case 4:
					hero_1->editEvil();
					break;
				case 5: flag = true; break;
				default: std::cout << "\n������ �������� ������\n";
				}
				if (flag)
				{
					flag = false;
					break;
				}
			}
			break;
		case 4:flag = true; break;
		default: std::cout << "\n������ �������� ������\n";
		}
		if (flag)
			{
			flag = false;
			break;
			}
		}
	hero_1->save();
	}
