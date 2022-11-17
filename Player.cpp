#include "Player.h"



// to move object to dx dy
int Player::move(int dx, int dy)
{
	x += dx;
	y += dy;
	return 1;  // 1:success 0:fail
}


















