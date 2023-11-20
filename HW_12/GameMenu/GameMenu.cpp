#include "GameMenu.h"
#include "HangMan.h"
#include "TicTacToe.h"
#include <iostream>

void GameMenu::Menu()
{
    int choice = 0;
    std::cout << "Welcome to CA games! \n For 'Hangman' type 1 \n For 'XandO' type 2" << std::endl;
    std::cin >> choice;
    if (choice == 1)
    {
        PlayHangman();
    }
    else if (choice == 2)
    {
        PlayTicTacToe();
    }
    else
    {
        std::cout << "For now we have only two games!" << std::endl;
    }
}

void GameMenu::PlayTicTacToe()
{
    std::string player1;
    std::string player2;
    std::cout << "Enter a name for play1 and player2: ";
    cin >> player1 >> player2;
    TicTacToe game(player1, player2);
    game.PlayGame();
}

void GameMenu::PlayHangman()
{
    // For now these parrameters will be changed only manually.
    std::string word = "watermelon";
    std::string description = "It's a fruit";
    int maxAtempts = 7;
    HangMan game(word, description, maxAtempts);
    game.Play();
}