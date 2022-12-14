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
	// mutable makes this variable can be changed even in const function
	mutable unsigned int times_of_show_name;
	int n1, n2, n3;  // test initialize before {}

	// This creator function
	// explicit means you can't use -- Player aplayer = "Mike" -- (implicit mode) to create a instance
	explicit Player(const char *pNike)
		:Entity(pNike), n1(0), n2(1), n3(0)
	{
		//x = 0;
		//y = 0;
		blood = 100;
		energy = 100;
		level = 1;
		times_of_show_name = 0;
		std::cout << "Player " << pName << " has been created!" << std::endl;
	}


	// This is destructure function
	~Player()
	{
		std::cout << "Player " << pName << " has been deleted!" << std::endl;
	}


	// to move object to dx dy
	int move(int dx, int dy);
	void show_name()  const;
	void show_message() override;  // override make compile check and make sure it's a virtual function.
	                               // It can make the logical more strongly.
	void operator+(const int& distance);
	void show_position();
};



