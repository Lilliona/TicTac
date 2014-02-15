#include "Game.h"


Game::Game(void)
{
}


Game::~Game(void)
{
}

void Game::turn()
{
	set_X.set_playerset();
	char field[9]={'1','2','3','4','5','6','7','8','9'};
	
	
	if ( set_X.get_playerset()== 1 && field[0] == '1')

			field[0] = 'X';
		else if (set_X.get_playerset() == 2 && field[1] == '2')

			field[1] = 'X';
		else if (set_X.get_playerset() == 3 && field[2] == '3')

			field[2] = 'X';
		else if (set_X.get_playerset() == 4 && field[3] == '4')

			field[3] = 'X';
		else if (set_X.get_playerset() == 5 && field[4] == '5')

			field[4] = 'X';
		else if (set_X.get_playerset() == 6 && field[5] == '6')

			field[5] = 'X';
		else if (set_X.get_playerset() == 7 && field[6] == '7')

			field[6] = 'X';
		else if (set_X.get_playerset() == 8 && field[7] == '8')

			field[7] = 'X';
		else if (set_X.get_playerset() == 9 && field[8] == '9')

			field[8] = 'X';
		else
		{
			cout<<"Invalid move ";
			cin.ignore();
			cin.get();
		}
			
		set_O.set_opponentset();

		if ( set_O.get_opponentset()== 1 && field[0] == '1')

			field[0] = 'O';
		else if (set_O.get_opponentset() == 2 && field[1] == '2')

			field[1] = 'X';
		else if (set_O.get_opponentset() == 3 && field[2] == '3')

			field[2] = 'O';
		else if (set_O.get_opponentset() == 4 && field[3] == '4')

			field[3] = 'O';
		else if (set_O.get_opponentset() == 5 && field[4] == '5')

			field[4] = 'O';
		else if (set_O.get_opponentset() == 6 && field[5] == '6')

			field[5] = 'O';
		else if (set_O.get_opponentset() == 7 && field[6] == '7')

			field[6] = 'O';
		else if (set_O.get_opponentset() == 8 && field[7] == '8')

			field[7] = 'O';
		else if (set_O.get_opponentset() == 9 && field[8] == '9')

			field[8] = 'O';
		else
		{
			cout<<"Invalid move ";
			cin.ignore();
			cin.get();
		}
	


}