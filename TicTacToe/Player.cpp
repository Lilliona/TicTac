#include "Player.h"


Player::Player(void)
{
}


Player::~Player(void)
{
}

void Player::set_Playerset()
{
	cout << "Please insert a number where you want to place your \"X\": ";
	cin >> playerset;
}

char Player::get_playerset()
{
	return playerset;
}