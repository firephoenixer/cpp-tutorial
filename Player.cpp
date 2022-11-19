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














