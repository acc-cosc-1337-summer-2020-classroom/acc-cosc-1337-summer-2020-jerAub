//cpp
#include "tic_tac_toe.h"

//GAME OVER
bool TicTacToe::game_over()
{  
    if(check_column_win() == true)
    {
        set_winner();
        return true;
    }
    if(check_row_win() == true)
    {
        set_winner();
        return true;
    }
    if(check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else 
    {
        return false; 
    }
}
//ROW WINNER
bool TicTacToe::check_row_win()
{
    //First row win
    if (((pegs[0] == "X") && (pegs[1] == "X") && (pegs[2] == "X")) || ((pegs[0] == "O") && (pegs[1] == "O") && (pegs[2] == "O")))
    {
        return true;
    }
    //Second row win
    if (((pegs[3] == "X") && (pegs[4] == "X") && (pegs[5] == "X")) || ((pegs[3] == "O") && (pegs[4] == "O") && (pegs[5] == "O")))
    {
        return true;
    }
    //Third row win
    if (((pegs[6] == "X") && (pegs[7] == "X") && (pegs[8] == "X")) || ((pegs[6] == "O") && (pegs[7] == "O") && (pegs[8] == "O")))
    {
        return true;
    }

    return false;
}

//COLUMN WINNER
bool TicTacToe::check_column_win()
{
    //First column win
    if (((pegs[0] == "X") && (pegs[3] == "X") && (pegs[6] == "X")) || ((pegs[0] == "O") && (pegs[3] == "O") && (pegs[6] == "O")))
    {
        return true;
    }
    //Second column win
    if (((pegs[1] == "X") && (pegs[4] == "X") && (pegs[7] == "X")) || ((pegs[1] == "O") && (pegs[4] == "O") && (pegs[7] == "O")))
    {
        return true;
    }
    //Third column win
    if (((pegs[2] == "X") && (pegs[5] == "X") && (pegs[8] == "X")) || ((pegs[2] == "O") && (pegs[5] == "O") && (pegs[8] == "O")))
    {
        return true;
    }

    return false;
}

//DIAGONAL WINNER 
bool TicTacToe::check_diagonal_win()
{
     //Diagonal win top left to bottom right
    if (((pegs[0] == "X") && (pegs[4] == "X") && (pegs[8] == "X")) || ((pegs[0] == "O") && (pegs[4] == "O") && (pegs[8] == "O")))
    {
        return true;
    }
    //Diagonal win bottom left to top right
    if (((pegs[6] == "X") && (pegs[4] == "X") && (pegs[2] == "X")) || ((pegs[6] == "O") && (pegs[4] == "O") && (pegs[2] == "O")))
    {
        return true;
    }

    return false;
}

//MARK BOARD
void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

//START
void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
    winner = "";
}

//DISPLAY
void TicTacToe::display_board()const
{
    for(std::size_t i=0; i < pegs.size(); i += 3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

//NEXT PLAYER
void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}
//WINNER 
void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else 
    {
        winner = "X";
    }
    clear_board();
}

//GET WINNER 
std::string TicTacToe::get_winner()
{
    return winner;
}




//FULL BOARD
bool TicTacToe::check_board_full()const
{
    for(auto peg: pegs)
    {
        if(peg == " ")
        {
            return false;
        }
    }
    return true;
}

//CLEAR BOARD
void TicTacToe::clear_board()
{
    for(std::size_t i=0; i < pegs.size(); ++i)
    {
        pegs[i] = " ";
    }
}