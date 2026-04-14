#include <iostream>
using namespace std;

bool isEmpty(int front, int back) {
  if (front == -1 && back == -1)
    return true;
  return false;
}

int size(int front, int back) {
  int result;
  if (isEmpty(front, back)) {
    return 0; // can't find size array is empty
  } else {
    result = back - front + 1;
  }

  return result;
}

void frontElement(int arr[3], int front, int back) {
  if (isEmpty(front, back)) {
    cout << "Array empty" << endl;
  }

  cout << arr[front];
}

void backElement(int arr[3], int front, int back) {
  if (isEmpty(front, back)) {
    cout << "Array empty" << endl;
  }

  cout << arr[back];
}

int push(int &front, int &back, int arr[3], int element) {
  // is the array empty -> set front and back to 0
  // else inc back by 1
  if (isEmpty(front, back)) {
    front = 0;
    back = 0;
  } else {
    back = back + 1; // back++;
  }

  arr[back] = element;

  return back;
}

int pop(int &front, int back) {
  if (isEmpty(front, back)) {
    return 0; // can't perform array is empty
  } else {
    front = front + 1;
  }

  return front;
}

int main() {

  int front = -1;
  int back = -1;
  int arr[3];

  back = push(front, back, arr, 70);
  back = push(front, back, arr, 30);
  back = push(front, back, arr, 10);

  // 70, 30, 10 -> front = 70, back = 10
  front = pop(front, back);

  cout << "empty: " << isEmpty(front, back) << endl; // 0

  cout << "size: " << size(front, back) << endl; // 2

  frontElement(arr, front, back); // 30
  backElement(arr, front, back);  // 10

  for (int i = front; i < back; i++) {
    cout << arr[i] << " "; // 30 10
  }
}
