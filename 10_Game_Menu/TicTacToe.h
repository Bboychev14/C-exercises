#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "Game.h"
#include <string>
#include <vector>

using namespace std;

class TicTacToe : public Game
{
public:
    TicTacToe(const string& Player1, const string& Player2 = "Radka");
    void Run() override;

private:
    string player1;
    string player2;

    int InputBoardSize() const;
    void PrintBoard(const vector<vector<char>>& vec) const;
    bool IsValidMove(int row, int col, const vector<vector<char>>& vec) const;
    bool IsWin(int row, int col, char currChar, const vector<vector<char>>& vec) const;
    bool IsBoardFull(const vector<vector<char>>& vec) const;

};

#endif