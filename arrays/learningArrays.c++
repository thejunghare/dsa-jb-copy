// create an array
// access elements
// modify
// loop

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  array<int, 5> nums = {5, 3, 4, 2, 1}; // static array

  cout << nums.back() << '\n';
  cout << nums.front() << '\n';

  vector<char> characters;

  cout << nums[0] << '\n'; // cout << characters[0];

  characters.push_back('a'); // adding at last : not possible for arrays
  characters[1] = 'b';

  characters.pop_back(); // last element

  // for, while do-while
  for (int i = 0; i < nums.size(); i++)
  {
    cout << i << '\n';
  }
}