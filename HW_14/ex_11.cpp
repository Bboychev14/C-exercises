#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

const int BOARD_SIZE = 4;

bool SearchWord(const vector<vector<char>>& board, const string& word);

bool SearchWordHelper(const vector<vector<char>>& board, const string& word, int index, int currIndex, unordered_set<int>& visited);

int main()
{
    vector<vector<char>> board = {
    {'A', 'B', 'C', 'D'},
    {'E', 'F', 'G', 'H'},
    {'I', 'J', 'K', 'L'},
    {'M', 'N', 'O', 'P'}
    };

    string word;
    cout << "Enter word: ";
    cin >> word;
    if (SearchWord(board, word))
    {
        cout << "Word found!" << endl;
    }
    else
    {
        cout <<"Word not found!" << endl;
    }

    return 0;
    
}

bool SearchWordHelper(const vector<vector<char>>& board, const string& word, int index, int currIndex, unordered_set<int>& visited)
{
    if (index == word.length())
    {
        return true;
    }
    int currRow = currIndex / BOARD_SIZE;
    int currCol = currIndex % BOARD_SIZE;

    for (int i = -1; i <= 1; ++i)
    {
        for (int j = -1; j <= 1; ++j)
        {
            int newRow = currRow + 1;
            int newCol = currCol + j;
            int newIndex = newRow * BOARD_SIZE + newCol;

            if (newRow >= 0 && newRow < BOARD_SIZE && newCol >= 0 && newCol < BOARD_SIZE && visited.find(newIndex) == visited.end() && board[newRow][newCol] == word[index])
            {
                visited.insert(newIndex);
                if (SearchWordHelper(board, word, index + 1, newIndex, visited))
                {
                    return true;
                }
                visited.erase(newIndex);
            }
        }
    }
    return false;
}
bool SearchWord(const vector<vector<char>>& board, const string& word)
{
    unordered_set<int> visited;
    for (int i = 0; i < BOARD_SIZE * BOARD_SIZE; ++i)
    {
        if (board[i / BOARD_SIZE][i % BOARD_SIZE] == word[0])
        {
            visited.insert(i);
            if (SearchWordHelper(board, word, 1, i, visited))
            {
                return true;
            }
            visited.erase(i);
        }
    }
    return false;
}