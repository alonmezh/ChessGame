#include "Board.h"

Board::Board() : _white(White, "Alex"), _black(Black, "Alon"), _currentPlayer(&_white)
{
	
}

bool Board::Done()
{
	return false;
}

void Board::MakeMove()
{
}


void Board::CurrentPlayerMakesMove()
{
	MakeMove();
	if (_currentPlayer->GetColor() == Black)
	{
		_currentPlayer = &_white;
		return;
	}

	_currentPlayer = &_black;
}
