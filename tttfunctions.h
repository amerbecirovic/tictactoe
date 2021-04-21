#include <vector>

void create_empty_game();
void set_square(int row, int column, int player);
void print_board();
bool check_win_player1();
bool check_win_player2();
std::vector<int> user_input();