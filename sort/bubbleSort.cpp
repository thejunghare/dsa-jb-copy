#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> arr) {
  for (int i = 0; i < arr.size() - 1; i++) {
    for (int j = 0; j < arr.size() - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  return arr;
}

int main() {
  vector<int> arr = {70, 30, 50, 10};
  vector<int> result = bubbleSort(arr);

  for (int x : result) {
    cout << x << " ";
  }
}