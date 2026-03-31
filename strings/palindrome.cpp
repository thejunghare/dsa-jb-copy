#include <iostream>
#include <string>
using namespace std;

bool check(string word)
{
  int i = 0;
  int j = word.size() - 1;
  while (i < j)
  {
    if (word[i] != word[j])
    {
      return false;
    }
    i++;
    j--;
  }
  return true;
}

int main()
{
  cout << check("abc");
}