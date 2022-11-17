#include "Player.h"



// to move object to dx dy
int Player::move(int dx, int dy)
{
	x += dx;
	y += dy;
	return 1;  // 1:success 0:fail
}


// show name of this object
void Player::show_name()
{
	std::cout << "Name: " << pName << std::endl;
	return;
}















