#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class HangMan
{
public:
    HangMan(const std::string& Word, const std::string& Description, int maxAttempts)
    : word(Word), description(Description), remainingAttempts(maxAttempts) {}

    void Play()
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

        std::cout  << "You ran out of attempts!" << std::endl;
    }
private:
    std::string word;
    std::string description;
    std::vector<char> guessedLetters;
    int remainingAttempts;  

    void PrintGuessedLetters()
    {
        for (char ch : guessedLetters)
        {
            std::cout << ch << " ";
        }
        std::cout << std::endl;
    }

    void PrintWord()
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

    bool ProcessGuess(char guess)
    {
        guessedLetters.push_back(guess);

        if (word.find(guess) != std::string::npos)
        {
            return true;
        }
        return false;
    }

    bool IsWordGuessed()
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
};

int main()
{
    std::string word = "watermelon";
    std::string description = "fruit";
    int maxAttempts = 7;

    HangMan game(word, description, maxAttempts);
    game.Play();

    return 0;
}