#include "tic_tac_toe.h"

namespace hayohtee
{
    void clear()
    {
        std::cout << "\033c";
    }

    int prompt(int player)
    {
        char choice;
        std::cout << "Player " << player << ", enter a number: ";
        std::cin >> choice;

        while (!isdigit(choice))
        {
            std::cout << "Invalid number\n";
            std::cout << "Player " << player << ", enter a number: ";
            std::cin >> choice;
        }

        return (choice - '0');
    }

    bool update_board(char arr[], char mark, int choice)
    {
        if ((choice < 1 || choice > 9) || (arr[choice - 1] == 'X' || arr[choice - 1] == 'O'))
        {
            std::cout << "Invalid Move\n";
            return false;
        }

        arr[choice - 1] = mark;

        return true;
    }

    void print_board(const char arr[])
    {
        clear();

        std::cout << "\n\t\t     Tic Tac Toe\n\n";
        std::cout << "\tPlayer 1 (X)\t  -\tPlayer 2 (O)\n\n";

        std::cout << "\t\t _________________\n";
        std::cout << "\t\t|     |     |     |\n";
        std::cout << "\t\t|  " << arr[0] << "  |  " << arr[1] << "  |  " << arr[2] << "  |\n";
        std::cout << "\t\t|_____|_____|_____|\n";
        std::cout << "\t\t|     |     |     |\n";
        std::cout << "\t\t|  " << arr[3] << "  |  " << arr[4] << "  |  " << arr[5] << "  |\n";
        std::cout << "\t\t|_____|_____|_____|\n";
        std::cout << "\t\t|     |     |     |\n";
        std::cout << "\t\t|  " << arr[6] << "  |  " << arr[7] << "  |  " << arr[8] << "  |\n";
        std::cout << "\t\t|_____|_____|_____|\n\n";
    }

    int check_win(const char arr[])
    {
        if (arr[0] == arr[1] && arr[1] == arr[2])
        {
            return (arr[0] == 'X' ? 1 : 2);
        }
        else if (arr[3] == arr[4] && arr[4] == arr[5])
        {
            return (arr[3] == 'X' ? 1 : 2);
        }
        else if (arr[6] == arr[7] && arr[7] == arr[8])
        {
            return (arr[6] == 'X' ? 1 : 2);
        }
        else if (arr[0] == arr[3] && arr[3] == arr[6])
        {
            return (arr[0] == 'X' ? 1 : 2);
        }
        else if (arr[1] == arr[4] && arr[4] == arr[7])
        {
            return (arr[1] == 'X' ? 1 : 2);
        }
        else if (arr[2] == arr[5] && arr[5] == arr[8])
        {
            return (arr[2] == 'X' ? 1 : 2);
        }
        else if (arr[0] == arr[4] && arr[4] == arr[8])
        {
            return (arr[0] == 'X' ? 1 : 2);
        }
        else if (arr[2] == arr[4] && arr[4] == arr[6])
        {
            return (arr[2] == 'X' ? 1 : 2);
        }
        else
        {
            return -1;
        }
    }

}