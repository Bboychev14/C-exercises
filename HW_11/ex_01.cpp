#include <iostream>
#include <vector>
#include <string>

using namespace std;

class TicTacToe
{
public:
    TicTacToe(const string& Player1, const string& Player2) : player1(Player1), player2(Player2) {}

    void StartGame()
    {
        PlayGame();
    }

private:
    string player1;
    string player2;

    int InputBoardSize()
    {
        int size = 0;
        cout << "Enter the size of the board: ";
        cin >> size;
        return size;
    }

    void PrintBoard(const vector<vector<char>>& vec)
    {
        cout << "Current board: " << endl;
        for (auto& row : vec)
        {
            for (char el : row)
            {
                cout << el << ' ';
            }
            cout << endl;
        }
    }

    bool IsValidMove(int row, int col, const vector<vector<char>>& vec)
    {
        int size = vec.size();
        return row >= 0 && row < size && col >= 0 && col < size && vec[row][col] == '-';
    }

    bool IsWin(int row, int col, char currChar, const vector<vector<char>>& vec)
    {
        int size = vec.size();
        bool rowWin = true;
        bool colWin = true;
        bool diag1Win = true;
        bool diag2Win = true;

        //Check the current row: i represents the col
        for (int i = 0; i < size; ++i)
        {
            if (vec[row][i] != currChar)
            {
                rowWin = false;
                break;
            }
        }
        if (rowWin)
        {
            return true;
        }

        //Check the current col: i represents the row
        for (int i = 0; i < size; ++i)
        {
            if(vec[i][col] != currChar)
            {
                colWin = false;
                break;
            }
        }
        if (colWin)
        {
            return true;
        }

        //Check diag1: i represents both row and col
        for (int i = 0; i < size; ++i)
        {
            if (vec[i][i] != currChar)
            {
                diag1Win = false;
                break;
            }
        }
        if (diag1Win)
        {
            return true;
        }

        //Check diag2: Same as diag1 but in reverse
        for (int i = size - 1; i >= 0; --i)
        {
            if (vec[i][i] != currChar)
            {
                diag2Win = false;
                break;
            }
        }
        if (diag2Win)
        {
            return true;
        }
        return false;
    }

    bool IsBoardFull(const vector<vector<char>>& vec)
    {
        for (const auto& row : vec)
        {
            for (char el : row)
            {
                if (el == '-')
                {
                    return false;
                }
            }
        }
        return true;
    }

    void PlayGame()
    {
        cout << "Starting TicTacToe game!" << endl;
        int boardSize = InputBoardSize();
        vector<vector<char>> board(boardSize, vector<char>(boardSize, '-'));

        bool player1Turn = true;
        bool isOver = false;

        while (!isOver)
        {
            PrintBoard(board);
            
            if (player1Turn)
            {
                cout << player1 << " - It's you'r turn! |x|: ";
            }
            else
            {
                cout << player2 << " - It's you'r turn! |O|: ";
            }
            int row, col;
            cin >> row >> col;

            if(IsValidMove(row, col, board))
            {
                char currChar = player1Turn ? 'x' : 'O';
                board[row][col] = currChar;

                if (IsWin(row, col, currChar, board))
                {
                    PrintBoard(board);
                    cout << (player1Turn ? player1 : player2) << " - wins!" << endl;
                    isOver = true;
                }
                else if (IsBoardFull(board))
                {
                    PrintBoard(board);
                    cout << "It's a draw!" << endl;
                    isOver = true;
                }
                player1Turn = !player1Turn;
            }
            else
            {
                cout << "Invalid move! Try again." << endl;
            }
        }
        cout << "Game over!" << endl;
    }

};

int main()
{
    while(true)
    {
        TicTacToe game("bobby", "radka");
        game.StartGame();
        string oneMoreGame;
        cout << "Do you want to play agan? yes/no: ";
        cin >> oneMoreGame;
        
        if (oneMoreGame == "no")
        {
            break;
        }
    }
    return 0;
}