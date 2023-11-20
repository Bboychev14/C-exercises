#include "HangMan.h"
#include <iostream>
#include <algorithm>

HangMan::HangMan(const std::string& Word, const std::string& Description, int maxAttempts):
word(Word), description(Description), remainingAttempts(maxAttempts) {}

void HangMan::PrintGuessedLetters() const
{
    for (char ch : guessedLetters)
    {
        std::cout << ch << " ";
    }
    std::cout << std::endl;
}

void HangMan::PrintWord() const
{
    for (char ch : word)
    {
        if (std::find(guessedLetters.begin(), guessedLetters.end(), ch) != guessedLetters.end())
        {
            std::cout << ch << " ";
        }
        else
        {
            std::cout << "_";
        }
    }
    std::cout << std::endl;
}

bool HangMan::ProcessGuess(char guess)
{
    guessedLetters.push_back(guess);

    if (word.find(guess) != std::string::npos)
    {
        return true;
    }
    return false;
}

bool HangMan::IsWordGuessed() const
{
    for (char letter : word)
    {
        if (std::find(guessedLetters.begin(), guessedLetters.end(), letter) == guessedLetters.end())
        {
            return false;
        }
    }
    return true;
}

void HangMan::Play()
{
    std::cout << "Description: " << description << std::endl;

    while (remainingAttempts > 0)
    {
        PrintGuessedLetters();
        std::cout << "Remaining attempts: " << remainingAttempts << std::endl;
        std::cout << "Word:" << std::endl;
        PrintWord();
        std::cout << ">> ";
        char guess;
        std::cin >> guess;

        if (ProcessGuess(guess))
        {
            std::cout << "Found!" << std::endl;
            if (IsWordGuessed())
            {
                std::cout << "Congratulations! You guessed the word!" << std::endl;
                return;
            }
        }
        else
        {
            std::cout << "not found!" << std::endl;
            --remainingAttempts;
        }
    }

    std::cout << "You ran out of attempts!" << std::endl;
}