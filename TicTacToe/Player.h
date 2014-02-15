#pragma once
#include "Field.h"
#include <string>
#include <sstream>

class Player
{
	int playerset;
public:
	Player(void);
	~Player(void);

	void set_playerset();
	int get_playerset();
};

