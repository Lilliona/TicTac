#pragma once
#include "Player.h"
#include "Opponent.h"
//#include "Field.h"

class Game
{
	
public:
	Game(void);
	~Game(void);
	//laesst nach und nach die Spieler ziehen und kontrolliert ob einer gewinnt

	void turn();
};
