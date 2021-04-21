#include <iostream>
#include <vector>

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

//set X or O depending on player
void set_square(int row, int column, int player)
{
    if(player == 1)
    {
        board[row][column] = 'X';
    }
    else
    {
        board[row][column] = 'O';
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

//check if player 1 won
bool check_win_player1()
{
    bool win = false;

    //if statements for all possible win conditions
    
    //row wins
    if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
    {
        win = true;
    }
    else if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
    {
        win = true;
    }
    else if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
    {
        win = true;
    }

    //column wins
    else if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
    {
        win = true;
    }
    else if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
    {
        win = true;
    }
    else if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
    {
        win = true;
    }

    //diagonal wins
    else if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
    {
        win = true;
    }
    else if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
    {
        win = true;
    }
    //no winning combo exists, so player 1 hasn't won yet.
    else
    {
        win = false;
    }

    return win;
}

//check if player 2 won
bool check_win_player2()
{
    bool win = false;

    //if statements for all possible win conditions
    
    //row wins
    if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
    {
        win = true;
    }
    else if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
    {
        win = true;
    }
    else if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
    {
        win = true;
    }

    //column wins
    else if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
    {
        win = true;
    }
    else if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
    {
        win = true;
    }
    else if(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
    {
        win = true;
    }

    //diagonal wins
    else if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
    {
        win = true;
    }
    else if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
    {
        win = true;
    }
    //no winning combo exists, so player 1 hasn't won yet.
    else
    {
        win = false;
    }

    return win;
}

//function to get user input for their turn
std::vector<int> user_input()
{   
    std::vector<int> row_col(2);

    std::cout << "Row: ";
    std::cin >> row_col[0];

    std::cout << "Column: ";
    std::cin >> row_col[1];

    return row_col;
}