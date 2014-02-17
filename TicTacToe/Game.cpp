#include "Game.h"


Game::Game(void)
{
}


Game::~Game(void)
{
}

int check_if_won();
void show_field();

void Game::turn()
{
	char field[9]={'1','2','3','4','5','6','7','8','9'};
	Player x;
	Opponent o;
	char mark;
	int who_inserts=1;
	int messenger_of_X_or_O=0;
	int i=-1;
	
	do
	{
		show_field();
		who_inserts=who_inserts%2;
		if(who_inserts==1)
		{
			x.set_playerset();
			messenger_of_X_or_O=x.get_playerset();
			mark='X';
		}
		else
		{
			o.set_opponentset();
			messenger_of_X_or_O=o.get_opponentset();
			mark='O';
		}


		if ( messenger_of_X_or_O == 1 && field[0] == '1')

			field[0] = mark;
		else if (messenger_of_X_or_O == 2 && field[1] == '2')

			field[1] = mark;
		else if (messenger_of_X_or_O == 3 && field[2] == '3')

			field[2] = mark;
		else if (messenger_of_X_or_O == 4 && field[3] == '4')

			field[3] = mark;
		else if (messenger_of_X_or_O == 5 && field[4] == '5')

			field[4] = mark;
		else if (messenger_of_X_or_O == 6 && field[5] == '6')

			field[5] = mark;
		else if (messenger_of_X_or_O == 7 && field[6] == '7')

			field[6] = mark;
		else if (messenger_of_X_or_O == 8 && field[7] == '8')

			field[7] = mark;
		else if (messenger_of_X_or_O == 9 && field[8] == '9')

			field[8] = mark;
		else
		{
			cout<<"Invalid move ";
			cin.ignore();
			cin.get();
		}
		who_inserts++;
		/*
		
	if ((field[1] == field[2] && field[2] == field[3]) 
		|| (field[4] == field[5] && field[5] == field[6]) 
		|| (field[7] == field[8] && field[8] == field[9])
		|| (field[1] == field[4] && field[4] == field[7])
		|| (field[2] == field[5] && field[5] == field[8])
		|| (field[3] == field[6] && field[6] == field[9])
		|| (field[1] == field[5] && field[5] == field[9])
		|| (field[3] == field[5] && field[5] == field[7]))
	{
		i=1;
	}
	else if ((field[1] != '1') && (field[2] != '2') && (field[3] != '3') 
		&& (field[4] != '4') && (field[5] != '5') && (field[6] != '6') 
        && (field[7] != '7') && (field[8] != '8') && (field[9] != '9'))
	{
		i=0;
	}
	else
	{	
		i=-1;
	}
	*/

	}while (i==-1);

	show_field();

	if (i==1)
	{
		if(who_inserts==1)
			cout << "Yay the Player won!" << endl;
		else
			cout << "Oh no, the Opponent won!" << endl;
	}
	else 
		cout << "i = " << i<< endl;

}

//Problem:geht immer in die return0-Schleife
/*int check_if_won()
{
	
	if ((field[1] == field[2] && field[2] == field[3]) 
		|| (field[4] == field[5] && field[5] == field[6]) 
		|| (field[7] == field[8] && field[8] == field[9])
		|| (field[1] == field[4] && field[4] == field[7])
		|| (field[2] == field[5] && field[5] == field[8])
		|| (field[3] == field[6] && field[6] == field[9])
		|| (field[1] == field[5] && field[5] == field[9])
		|| (field[3] == field[5] && field[5] == field[7]))
	{
		return=1;
	}
	else if ((field[1] != '1') && (field[2] != '2') && (field[3] != '3') 
		&& (field[4] != '4') && (field[5] != '5') && (field[6] != '6') 
        && (field[7] != '7') && (field[8] != '8') && (field[9] != '9'))
	{
		return=0;
	}
	else
	{	
		return=-1;
	}
}


*/

void show_field()
{
	cout << "Player 1 (X) - Player 2 (O)"<<endl<<endl;	
	
	cout << " " <<field[0]<<" | "<<field[1]<<" | " <<field[2]<<endl;
	cout << " ----------"<<endl;
	cout << " "<<field[3]<<" | "<<field[4]<<" | " <<field[5]<<endl;
	cout << " ----------"<<endl;
	cout << " "<<field[6]<<" | "<<field[7]<<" | " <<field[8]<<endl;
}
