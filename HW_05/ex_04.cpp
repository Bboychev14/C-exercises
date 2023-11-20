#include <iostream>
#include <vector>

using namespace std;

bool isSorted(const vector<string>& vec);

int main()
{
  vector<string> vec1 = {"a", "as", "asd", "bs"};
  vector<string> vec2 = {"ab", "b"};
  vector<string> vec3 = {"bad", "ab"};
  cout << isSorted(vec1) << endl;
  cout << isSorted(vec2) << endl;
  cout << isSorted(vec3);
  return 0;
}

bool isSorted(const vector<string>& vec)
{
  for (int i = 0; i < vec.size(); ++i)
  {
    if (vec[i] < vec[i - 1])
    {
      return false;
    }
  }

  return true;
}