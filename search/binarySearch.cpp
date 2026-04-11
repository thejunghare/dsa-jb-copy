#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> nums, int number) {
  int low = 0;
  int high = nums.size() - 1;

  while (low < high) {

    int mid = nums.size() / 2; // mid is our index

    if (nums[mid] == number) {
      return mid;
    }
    if (nums[mid] < number) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  vector<int> nums = {70, 30, 50, 10};
  cout << search(nums, 30);
}