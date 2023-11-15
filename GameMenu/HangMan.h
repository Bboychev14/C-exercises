#include <string>
#include <vector>
#include "Game.h"

class HangMan : public Game
{
public:
    HangMan(const std::string& Word, const std::string& Description, int maxAttempts);
    void Run() override;
    
private:
    std::string word;
    std::string description;
    std::vector<char> guessedLetters;
    int remainingAttempts;  

    void PrintGuessedLetters() const;
    void PrintWord() const;
    bool ProcessGuess(char guess);
    bool IsWordGuessed() const;
};