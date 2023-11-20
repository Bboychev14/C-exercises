#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());

    int minRange, maxRange;
    cout << "Enter the range for the number: ";
    cin >> minRange >> maxRange;

    uniform_int_distribution<int> distribution(minRange, maxRange);
    int secretNumber = distribution(gen);

    int guess = 0;
    int numGuesses = 0;
    bool correctGuess = false;

    while (!correctGuess)
    {
        cout << "Enter you'r guess: ";
        cin >> guess;

        ++numGuesses;
        if (guess == secretNumber)
        {
            cout << "You guessed the number in " << numGuesses << "attempts." << endl;
            correctGuess = true;
        }
        else
        {
            if (guess < secretNumber)
            {
                cout << "Up!" << endl;
            }
            else
            {
                cout << "Down" << endl;
            }
            int diff = abs(secretNumber - guess);

            if (diff <= 5)
            {
                cout << "Hot" << endl;
            }
            else if (diff <= 10)
            {
                cout << "Warm" << endl;
            }
            else if(diff <= 20)
            {
                cout << "Cold" << endl;
            }
            else if (diff <= 50)
            {
                cout << "Cool" << endl;
            }
            else
            {
                cout << "Icy" << endl;
            }
        }
    }

    return 0;
    
}