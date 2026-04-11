#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> &arr) {
  for (int i = 0; i < arr.size() - 1; ++i) {
    int minIdx = i;
    for (int j = i + 1; j < arr.size(); ++j) {
      if (arr[j] < arr[minIdx]) {
        minIdx = j;
      }
    }
    swap(arr[i], arr[minIdx]);
  }

  return arr;
}

int main() {
  vector<int> arr = {70, 30, 50, 10};

  vector<int> result = selectionSort(arr);

  for (int x : result) {
    cout << x << " ";
  }
}