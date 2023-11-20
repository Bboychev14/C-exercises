#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

void PlaySongs(vector<string>& vec);

int main()
{
    vector<string> songs = {"song1", "song2", "song3", "song4", "song5"};
    PlaySongs(songs);

    return 0;

}

void PlaySongs(vector<string>& vec)
{
    srand(time(0));
    random_shuffle(vec.begin(), vec.end());
    for (auto iter = vec.begin(); iter < vec.end(); ++iter)
    {
        cout << *iter << ' ';
    }
    cout << endl;
}