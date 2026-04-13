#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> nums;

  nums.push(70);                // top 0
  cout << nums.empty() << endl; // 0
  cout << nums.size() << endl;  // 1
  cout << nums.top() << endl;   // 70
  nums.pop();                   // top -1
}