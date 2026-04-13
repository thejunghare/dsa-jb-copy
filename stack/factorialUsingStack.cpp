#include <iostream>
#include <stack>
using namespace std;

int fact(int n) {
  int result = 1;
  stack<int> nums;

  while (n >= 1) {
    nums.push(n);
    n--;
  }
  while (!nums.empty()) {
    result = result * nums.top();
    nums.pop();
  }
  return result;
}

int main() { cout << fact(6) << endl; }