#pragma once
#include "Field.h"
#include <string>
#include <sstream>

class Player
{
	int player_ID;
	int playerset;
public:
	Player();
	~Player(void);

	void set_playerset();
	int get_playerset();
};

