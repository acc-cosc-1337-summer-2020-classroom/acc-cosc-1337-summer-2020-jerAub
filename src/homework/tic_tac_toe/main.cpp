#include "tic_tac_toe.h"

int main() 
{
	TicTacToe tic_tac_toe;
	std::string player;
	bool quit = false; 
	std::string choice; //Users choice to quit or play again
	
	//Runs game until user opts to quit
	while (quit == false) //Sentinal value
	{
		std::cout<<"Enter X or O: ";
		std::cin>>player;
		tic_tac_toe.start_game(player);
		do //Gets position choice from user until winning condition is met
		{
			int position;
			std::cout<<"Enter postion from 1 to 9: ";
			std::cin>>position;
			tic_tac_toe.mark_board(position);
			tic_tac_toe.display_board();
			tic_tac_toe.game_over(); //checks for winning conditions , sets winner 
			

		} while (tic_tac_toe.get_winner() == ""); 
		
		
		std::cout<<"Game over"<<"\n";
		std::cout<<"Winner: Player "<<tic_tac_toe.get_winner();	
		std::cout<<"\n";
		std::cout<<"Press any key to play again or Q to quit"<<"\n";
		std::cin>>choice;
		if((choice == "Q") || (choice == "q")) //Used to exit program
		{
			quit = true;
		}
	}

		return 0;
} 
