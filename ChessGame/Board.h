#pragma once
#include "Player.h"

class Board
{
private:
	Player _white;
	Player _black;
	Player * _currentPlayer;
public:
	Board();
	bool Done();
	Player* GetCurrentPlayer() const { return _currentPlayer; };
	void MakeMove();
	void CurrentPlayerMakesMove();

	
};
