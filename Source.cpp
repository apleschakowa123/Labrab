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
			std::cout << "\nВведен неверный символ\n";
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
			std::cout << "\nВведен неверный символ\n";
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
	std::cout << "\n\n1) Герои \n2) Злодеи\n3) Монстры\n4) Выход\n\n";
	return(mistake());
}

int hero_menu()
{
	std::cout << "\t1) Добавить Героя \n\t2) Удалить героя \n\t3) Напистаь всех героев\n\t4) Изменить Героя\n\t5) Выход\n\n\t";
	return(mistake());
}

int evil_menu()
{
	std::cout << "\t1) Добавить злодея \n\t2) Удалить злодеяа \n\t3) Вывести всех злодеев\n\t4) Исправить злодея\n\t5) Выход\n\n\t";
	return(mistake());
}

int monstr_menu()
{
	int i{ 0 };
	std::cout << "\t1) Добавить монстра \n\t2) Удалить монстра \n\t3) Вывести монстров\n\t4) Изменить монстра\n\t5) Выход\n\n\t";
	return(mistake());
}



int main()
{
	setlocale(LC_ALL, "Russian");
	int menu = 0;
	bool flag = 0;
	Keeper *hero_1 = new Keeper;
	std::cout << "Првиветствую в моей базе данных. Приятной работы\n\n\n";
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
				default: std::cout << "\nВведен неверный символ\n";
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
				default: std::cout << "\nВведен неверный символ\n";
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
				default: std::cout << "\nВведен неверный символ\n";
				}
				if (flag)
				{
					flag = false;
					break;
				}
			}
			break;
		case 4:flag = true; break;
		default: std::cout << "\nВведен неверный символ\n";
		}
		if (flag)
			{
			flag = false;
			break;
			}
		}
	hero_1->save();
	}
