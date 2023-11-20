#include <string>
#include <vector>

class HangMan
{
public:
    HangMan(const std::string& Word, const std::string& Description, int maxAttempts);

    void Play();
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