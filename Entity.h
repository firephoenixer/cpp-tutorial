#pragma once
#include <iostream>

class Entity
{
public:
	int x;
	int y;
	const char* pName;
	Entity(const char* pStr)
	{
		pName = pStr;
		x = 0;
		y = 0;
	}

	// show name of this object
	// If a function is virtual, means it will be changed by the changing of its essence (in sub class)!
	virtual void show_name();
};

