#pragma once

#include "Game.h"
#include <vector>
#include <memory>

class GameMenu
{
public:
    ~GameMenu();
    void Menu();
    
private:
    std::vector<Game*> games;
    void AddGames();
};