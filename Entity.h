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
	virtual void show_message();
	// This is a pure virtual example. An entity does not have a combat effectivness yet, so just =0
	// But when an entity evolute to a player or a monster, it will have different kind of combat effect
	// So we need make a pure virtual function here, to link different override essencely function
	//virtual float calc_combat_effect() = 0;
	// =0 will make Entity a abstract class, witch can't be instanced, we can use {} instead if do need instance.
	// But it will lost the force of override the pure virtual function. Use this carefully.
	virtual float calc_combat_effect() { return 0; };

// this kind members only can be used in this class or frendly class
private:
	int iPrivate;

// this kind members only can be used in this class and its sub class
protected:
	int iProtected;

};

