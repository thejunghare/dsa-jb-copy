#include <iostream>
using namespace std;

bool isEmpty(int top) {
  if (top == -1)
    return true;
  return false;
}

int push(int top, int arr[10], int element) {
  top = top + 1;
  arr[top] = element;
  return top;
}

int pop(int top, int arr[10]) {
  if (isEmpty(top)) {
    return 0; // pop cannot be performed
  }

  top = top - 1;

  return top;
}

int size(int top) {
  if (isEmpty(top)) { // comment
    return 0;
  }

  return top + 1;
}

int firstElememnt(int top, int arr[10]) { return arr[top]; }

int main() {
  int top = -1;
  int element = 70;
  int arr[10];

  top = push(top, arr, element);           // 0
  cout << firstElememnt(top, arr) << endl; // 70
  cout << size(top) << endl;               // 1
  cout << isEmpty(top) << endl;            // 0
}