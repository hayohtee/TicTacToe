#pragma once

namespace hayohtee
{
    void clear();
    void print_board(const char arr[]);
    int check_win(const char arr[]);
    int prompt(int player);
    bool update_board(char arr[], char mark, int choice);

}