
#include <iostream>


#include "Board.h"
#include "Player.h"


void PromptPlayer(Player * player)
{
	std::cout << player->GetName().c_str() << " please make a move: ";
	std::string move;
	std::cin >> move;
	std::cout << player->GetName().c_str() << " move: " << move << std::endl;
}

int main()
{
	std::cout << "Welcome to my Chess game!" << std::endl;

	Board board;

	while (!board.Done())
	{
		PromptPlayer(board.GetCurrentPlayer());
		board.CurrentPlayerMakesMove();
	}

	std::cout << "Come and play again!\n";
	return 0;
}