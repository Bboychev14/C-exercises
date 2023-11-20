#include <iostream>
#include "ex_18.cpp"

using namespace std;

double winningChance(int withdrawnBalls, int totalBalls)
{
    double comb = factorial(totalBalls) / (factorial(withdrawnBalls) * factorial(totalBalls - withdrawnBalls));
    double chanceOfWinning = 1.0 / comb;
    return chanceOfWinning;
}

/* This function receives a format of a lottery game 
and return your chance of winning it. */

/* int main()
{
    int withdrawnBalls = 0;
    int totalBalls = 0;
    cout << "Enter the desired format: ";
    cin >> withdrawnBalls >> totalBalls;
    cout << "Your chance is: " << winningChance(withdrawnBalls, totalBalls);

    return 0;

} */