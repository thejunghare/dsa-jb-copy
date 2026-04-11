#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> nums, int number) {
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == number) {
      return i;
    }
  }

  return -1;
}

int main() {
  vector<int> nums = {70, 30, 50, 10};
  cout << search(nums, 30);
}