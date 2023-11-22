#include "GameMenu.h"
#include "HangMan.h"
#include "TicTacToe.h"
#include <iostream>
#include "Game.h"

GameMenu::~GameMenu()
{
    delete games[1];
    delete games[0];
}

void GameMenu::Menu()
{
    AddGames();
    int choice = 0;
    std::cout << "Welcome to CA games! \n For 'Hangman' type 1 \n For 'XandO' type 2" << std::endl;
    std::cin >> choice;
    if (choice > 2)
    {
        std::cout << "For now we only have 2 available games!" << std::endl;
    }
    else
    {
        int gameIdx = choice - 1;
        games[gameIdx]->Run();
    }

}

void GameMenu::AddGames()
{
    Game* game1 = new HangMan("watermelon", "It's a fruit!", 7);
    Game* game2 = new TicTacToe("Az", "Ti");
    games.push_back(game1);
    games.push_back(game2);
}