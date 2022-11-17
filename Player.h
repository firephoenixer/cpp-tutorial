#pragma once
#include <iostream>
#include <string.h>

class Player
{
public:
	int x, y;
	float blood;
	float energy;
	unsigned int level;
	const char* pName;

	// This creator function
	Player(const char *pNike)
	{
		x = 0;
		y = 0;
		blood = 100;
		energy = 100;
		level = 1;
		pName = pNike;
		std::cout << "Player " << pName << " has been created!" << std::endl;
	}


	// This is destructure function
	~Player()
	{
		std::cout << "Player " << pName << " has been deleted!" << std::endl;
	}


	// to move object to dx dy
	int move(int dx, int dy);
};



