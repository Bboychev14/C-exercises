#include "HangMan.h"

int main()
{
    std::string word = "watermelon";
    std::string description = "fruit";
    int maxAttempts = 7;

    HangMan game(word, description, maxAttempts);
    game.Play();

    return 0;
}