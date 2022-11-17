#pragma once
#include <iostream>
#include <string.h>

#define MAX_NAME 100

class Player
{
public:
	int x, y;
	float blood;
	float energy;
	unsigned int level;
	char* pName[MAX_NAME];

	// This creator function
	Player(const char *pNike)
	{
		x = 0;
		y = 0;
		blood = 100;
		energy = 100;
		level = 1;
		if(strlen(pNike) < MAX_NAME)
			memcpy(pName, pNike, strlen(pNike));
		else
			memcpy(pName, pNike, MAX_NAME -1);
		std::cout << "Player " << pName << " has been created!" << std::endl;
	}


	// This is destructure function
	~Player()
	{
		std::cout << "Player " << pName << " has been deleted!" << std::endl;
	}


};

