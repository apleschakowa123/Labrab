#include "Keeper.h"

int mistake1(int a)
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
void pust(int a)
{
	if (a == 0)
	{
		std::cout << "\n\t\t\tПерсонажей еще нет в БД\n";
	}
}

void Keeper::load()
{
	std::ifstream in("F:\\bd.txt");
	in >> sizeHero;
	in >> sizeEvil;
	in >> sizeMonstr;
	hero = (Hero**)realloc(hero, (sizeHero) * sizeof(Hero));
	evil = (Evil**)realloc(evil, (sizeEvil) * sizeof(Evil));
	monstr = (Monstr**)realloc(monstr, (sizeMonstr) * sizeof(Monstr));
	for (int i = 0 ; i < sizeHero; i++)
	{
		hero[i] = new Hero;
		in.ignore(32767, '\n');
		std::getline(in, inc);
		hero[i]->set_name(inc);
		std::getline(in, inc);
		hero[i]->set_gun(inc);
		std::getline(in, inc);
		hero[i]->set_skills(inc);
	}
	for (int i = 0; i < sizeEvil; i++)
	{
		evil[i] = new Evil;
		std::getline(in, inc);
		evil[i]->set_name(inc);
		std::getline(in, inc);
		evil[i]->set_gun(inc);
		std::getline(in, inc);
		evil[i]->set_skills(inc);
		std::getline(in, inc);
		evil[i]->set_zlo(inc);
		std::getline(in, inc);
		evil[i]->set_home(inc);
	}
	for (int i = 0; i < sizeMonstr; i++)
	{
		monstr[i] = new Monstr;
		std::getline(in, inc);
		monstr[i]->set_name(inc);
		std::getline(in, inc);
		monstr[i]->set_wiev(inc);
	}
	in.close();
}
void Keeper::addHero()
{
	if ((sizeHero) == 0)
	{
		hero = (Hero**)realloc(hero, (1) * sizeof(Hero));
	}
	else
	{
		hero = (Hero**)realloc(hero, (sizeHero) * sizeof(Hero));
	}
	hero[sizeHero] = new Hero;
	hero[sizeHero]->enterHero();
	sizeHero++;
}
void Keeper::printallHero()
{
	pust(sizeHero);
	for (int i =  0 ; i < sizeHero; i++)
	{
		std::cout << "Номер героя в базе данных\t" << i;
		hero[i]->outHero();
	}
}

void Keeper::delHero()
{
	std::cout << "\tВведите номер героя:     \n";
	sizeHero1 = mistake1(sizeHero - 1);
	sizeHero2 = (sizeHero - sizeHero1) - 1;
	for (int i = 0 ; i < sizeHero2; i++)
	{
		del = sizeHero1 + 1;
		hero[sizeHero1] = new Hero(*hero[del]);
		sizeHero1++;
	}
	hero = (Hero**)realloc(hero, (sizeHero - 1) * sizeof(Hero));
	sizeHero--;
}

void Keeper::editHero()
{
	std::cout << "\tВведите номер героя):     \n";
	num1 = mistake1(sizeHero - 1);
	std::cout << "\n\tВведите пункт для редактирования\n\t1.Имя\n\t2.Оружие\n\t3.Навык\n\t";
	num = mistake1(3);
	switch (num)
	{
	case 1:hero[num1]->setname();
		break;
	case 2:hero[num1]->setgun();
		break;
	case 3:hero[num1]->setsskills();
		break;
	}
}



void  Keeper::addEvil()
{
	if ((sizeEvil) == 0)
	{
		evil = (Evil**)realloc(evil, (1) * sizeof(Evil));
	}
	else
	{
		evil = (Evil**)realloc(evil, (sizeEvil) * sizeof(Evil));
	}
	evil[sizeEvil] = new Evil;
	evil[sizeEvil]->enterEvil();
	sizeEvil++;
}
void  Keeper::delEvil()
{
	std::cout << "\tВведите номер злодея:     \n";
	sizeEvil1 = mistake1(sizeEvil - 1);
	sizeEvil2 = (sizeEvil - sizeEvil1) - 1;
	for (int i =  0 ; i < sizeEvil2; i++)
	{
		del = sizeEvil1 + 1;
		evil[sizeEvil1] = new Evil(*evil[del]);
		sizeEvil1++;
	}
	evil = (Evil**)realloc(evil, (sizeEvil - 1) * sizeof(Evil));
	sizeEvil--;
}
void  Keeper::printallEvil()
{
	pust(sizeEvil);
	for (int i =  0 ; i < sizeEvil; i++)
	{
		std::cout << "Номер злодея в базе данных\t" << i;
		evil[i]->outEvil();
	}
}
void  Keeper::editEvil()
{
	std::cout << "\tВведите номер злодея:     \n";
	num1 = mistake1(sizeEvil - 1);
	std::cout << "\n\tВведите пункт для редактирования\n\t1.Имя\n\t2.Оружие\n\t3.Навык\n\t4.Место обитания\n\t3.Зло которое совершил\n\t";
	num = mistake1(5);
	switch (num)
	{
	case 1:evil[num1]->setname();
		break;
	case 2:evil[num1]->setgun();
		break;
	case 3:evil[num1]->setsskills();
		break;
	case 4:evil[num1]->sethome();
		break;
	case 5:evil[num1]->setzlo();
		break;
	}
}





void  Keeper::addMostr()
{
	if ((sizeMonstr) == 0)
	{
		monstr = (Monstr**)realloc(monstr, (1) * sizeof(Monstr));
	}
	else
	{
		monstr = (Monstr**)realloc(monstr, (sizeMonstr) * sizeof(Monstr));
	}
	monstr[sizeMonstr] = new Monstr;
	monstr[sizeMonstr]->enterMonstr();
	sizeMonstr++;
}
void  Keeper::delMostr()
{
	std::cout << "\tВведите номер Монстра:     \n";
	sizeMonstr1 = mistake1(sizeMonstr - 1);
	sizeMonstr2 = (sizeMonstr - sizeMonstr1) - 1;
	for (int i = 0; i < sizeMonstr2; i++)
	{
		del = sizeMonstr1 + 1;
		monstr[sizeEvil1] = new Monstr(*monstr[del]);
		sizeMonstr++;
	}
	monstr = (Monstr**)realloc(monstr, (sizeMonstr - 1) * sizeof(Monstr));
	sizeMonstr--;
}
void  Keeper::printallMostr()
{
	pust(sizeMonstr);
	for (int i = 0; i < sizeMonstr; i++)
	{
		std::cout << "Номер монстра в базе данных\t" << i;
		monstr[i]->outMonstr();
	}
}
void Keeper::editMostr()
{
	std::cout << "\tВведите номер монстра:     \n";
	num1 = mistake1(sizeMonstr - 1);
	std::cout << "\n\tВведите пункт для редактирования\n\t1.Имя\n\t2.Внешний вид\n\t";
	num = mistake1(5);
	switch (num)
	{
	case 1:monstr[num1]->setname();
		break;
	case 2:monstr[num1]->setwiev();
		break;
	}
}



void Keeper::save()
{
	std::ofstream out("F:\\bd.txt");
	out << sizeHero << "\n";
	out << sizeEvil << "\n";
	out << sizeMonstr << "\n";
	for (int i = 0 ; i < sizeHero; i++)
	{
		out << hero[i]->getname() << "\n";
		out << hero[i]->getgun() << "\n";
		out << hero[i]->getskills() << "\n";
		
	}
	for (int i = 0 ; i < sizeEvil; i++)
	{
		out << evil[i]->getname() << "\n";
		out << evil[i]->getgun() << "\n";
		out << evil[i]->getskills() << "\n";
		out << evil[i]->getzlo() << "\n";
		out << evil[i]->gethome() << "\n";
	}
	for (int i =0 ; i < sizeMonstr; i++)
	{
		out << monstr[i]->getname() << "\n";
		out << monstr[i]->getwiev() << "\n";
	}
	out.close();
}





Keeper::Keeper()
{
}


Keeper::~Keeper()
{
}
