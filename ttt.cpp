#include <iostream>
#include <vector>
#include "tttfunctions.h"

int main()
{

    // only 9 total possible moves, need to check for this with num_moves incrementing on each iteration.
    int possible_moves = 9;
    int num_moves = 0;

    //variables for storing user input for game moves
    int row;
    int column;
    int player;
    std::vector<int> row_col;

    //create the empty board
    std::cout << "New tic-tac-toe game started.\n";
    create_empty_game();

    /* while(no winner & number moves < 9):
    -   display the current game board 
    -   ask user 1 for input, add it to the board
    -   display the board
    -   ask user 2 for input, add it to the board
    */

   while((!check_win_player1() && !check_win_player2()) && num_moves <= 9)
   {
       print_board();
       
       if(num_moves == 9)
       {
           std::cout << "It's a tie!\n";
           break;
       }
    
       std::cout << "Player 1, please enter your move: \n";
       player = 1;
       row_col = user_input();
       set_square(row_col[0], row_col[1], player);
       print_board();
       num_moves++;

       if(check_win_player1())
       {
           break;
       }

       if(num_moves == 9)
       {
           std::cout << "It's a tie!\n";
           break;
       }

       std::cout << "Player 2, please enter your move: \n";
       player = 2;
       row_col = user_input();
       set_square(row_col[0], row_col[1], player);
       num_moves++;
   }

    if(check_win_player1())
    {
        std::cout << "Player 1 wins!!!\n";
        print_board();
    }
    else if(check_win_player2())
    {
        std::cout << "Player 2 wins!!!\n";
        print_board();
    }
}