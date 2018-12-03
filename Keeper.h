#pragma once
#include "Evil.h"
#include "Hero.h"
#include "Heroes.h"
#include "Monstr.h"
#include <fstream>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>







class Keeper
{
private:
	int sizeHero; int sizeHero1; int sizeHero2;
	int sizeEvil; int sizeEvil1; int sizeEvil2;
	int sizeMonstr; int sizeMonstr1; int sizeMonstr2;
	int del;
	int num1;
	int num;
	std::string inc;
	Hero * * hero = new Hero*;
	Evil** evil = new Evil*;
	Monstr** monstr = new Monstr*;
public:
	void addHero();
	void delHero();
	void printallHero();
	void editHero();


	void addEvil();
	void delEvil();
	void printallEvil();
	void editEvil();


	void addMostr();
	void delMostr();
	void printallMostr();
	void editMostr();


	Keeper();
	void load();
	void save();
	virtual ~Keeper();
};

