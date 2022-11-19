#include "Player.h"



// to move object to dx dy
int Player::move(int dx, int dy)
{
	x += dx;
	y += dy;
	return 1;  // 1:success 0:fail
}


// show name of this object
void Player::show_name()  const  // const here mean a promision not the change any member variable
{
	times_of_show_name++;
	std::cout << "Name: " << pName << "  call times: " << times_of_show_name << std::endl;
	return;
}


// show all the message of this object
void Player::show_message()
{
	std::cout << "Name: " << pName << " -- Blood:" << blood << " Energy:" << energy << std::endl;
	return;
}


// show the usage of operator overloading
// move a player's position by player + 1
// seems the operator still need two participants, when it is class function already has "this" given.
void Player::operator+(const int& distance)
{
	this->x += distance;
	this->y += distance;
	return;
}


// show all the position of this object
void Player::show_position()
{
	std::cout << "Name: " << pName << " -- x:" << x << " y:" << y << std::endl;
	return;
}















