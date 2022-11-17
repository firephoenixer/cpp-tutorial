#pragma once
#include <iostream>
#include <string.h>
#include "Entity.h"

// inheritance form a father class, then we won't need create a new class when the classes have some kind of relationship.
class Player: public Entity
{
public:
	// These two member variables, the father class already have.
	//int x, y;
	//const char* pName;
	float blood;
	float energy;
	unsigned int level;
	

	// This creator function
	Player(const char *pNike):Entity(pNike)
	{
		//x = 0;
		//y = 0;
		blood = 100;
		energy = 100;
		level = 1;
		//pName = pNike;
		std::cout << "Player " << pName << " has been created!" << std::endl;
	}


	// This is destructure function
	~Player()
	{
		std::cout << "Player " << pName << " has been deleted!" << std::endl;
	}


	// to move object to dx dy
	int move(int dx, int dy);
	void show_name();
};



