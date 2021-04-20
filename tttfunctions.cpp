#include <iostream>

//initialize the board as a global variable
char board[3][3];

void create_empty_game()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

// print the board
void print_board()
{

    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "\n";
    std::cout << "     |     |      \n";
 
    std::cout << "\n";
}

//check if there is a winner
bool check_win()
{
    bool win = false;

    //if statements for all possible win conditions, take advantage of transitive equality

    //row wins
    if(board[0][0] != ' ' && board[0][0] == board[0][1] && board[0][0] == board[0][2])
    {
        win = true;
    }
    else if(board[1][0] != ' ' && board[1][0] == board[1][1] && board[1][0] == board[1][2])
    {
        win = true;
    }
    else if(board[2][0] != ' ' && board[2][0] == board[2][1] && board[2][0] == board[2][2])
    {
        win = true;
    }

    //column wins
    else if(board[0][0] != ' ' && board[0][0] == board[1][0] && board[0][0] == board[2][0])
    {
        win = true;
    }
    else if(board[0][1] != ' ' && board[0][1] == board[1][1] && board[0][0] == board[2][1])
    {
        win = true;
    }
    else if(board[0][2] != ' ' && board[0][2] == board[1][2] && board[0][0] == board[2][2])
    {
        win = true;
    }

    //diagonal wins
    else if(board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        win = true;
    }

    else if(board[0][0] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        win = true;
    }


    return win;
}