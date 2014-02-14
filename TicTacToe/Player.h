#pragma once
#include "Field.h"

class Player
{
	char playerset;
public:
	Player(void);
	~Player(void);

	void set_Playerset();
	char get_playerset();
};

