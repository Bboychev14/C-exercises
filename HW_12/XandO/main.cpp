#include"TicTacToe.h"
#include <iostream>

int main()
{
    while(true)
    {
        TicTacToe game("bobby", "Bo");
        game.PlayGame();
        string oneMoreGame;
        cout << "Do you want to play again? yes/no: ";
        cin >>oneMoreGame;

        if(oneMoreGame == "no")
        {
            break;
        }
    }

    return 0;

}