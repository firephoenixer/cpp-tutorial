#include "Entity.h"


// show name of this object
void Entity::show_name()
{
	std::cout << "Name: " << pName << std::endl;
	return;
}


// show all the message of this object
void Entity::show_message()
{
	std::cout << "Name: " << pName << " -- X:" << x << " Y:"<<y<<std::endl;
	return;
}

