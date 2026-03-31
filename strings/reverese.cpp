#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverseString(string word)
{
  vector<char> c;

  for (int i = 0; i <= word.size(); i++)
  {
    c.push_back(word[i]); // 'abc' -> [a, b,c]
  }

  int i = 0;
  int j = word.size() - 1;

  while (i < j)
  {
    swap(word[i], word[j]);
    i++;
    j--;
  }
}

int main()
{
}