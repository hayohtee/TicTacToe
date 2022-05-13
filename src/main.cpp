#include <iostream>
#include "tic_tac_toe.h"

using namespace ::hayohtee;

int main()
{
    char arr[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int counter = 0;

    int winner{};

    do
    {
        print_board(arr);
        winner = check_win(arr);

        if (winner > 0)
            break;

        int player = counter % 2 + 1;
        int choice = prompt(player);
        char mark = (player == 1 ? 'X' : 'O');

        while (!update_board(arr, mark, choice))
        {
            choice = prompt(player);
        }

        counter++;

    } while (winner == -1 && counter < 9);

    print_board(arr);

    if (counter >= 9)
        std::cout << "\t\t    It is a tie\n"
                  << std::endl;
    else
        std::cout << "\t\t    Player " << winner << " wins\n"
                  << std::endl;

    return 0;
}