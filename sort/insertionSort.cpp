#include <iostream>
#include <vector>
using namespace std;

vector<int> sort(vector<int> arr) {
  int i, j, current;
  for (i = 1; i < arr.size(); i++) {
    current = arr[i];
    for (j = i - 1; j >= 0 && arr[j] > current; j--) {
      if (arr[j] > current) {
        arr[j + 1] = arr[j];
      }
    }
    arr[j + 1] = current;
  }
  return arr;
}

int main() {
  vector<int> arr = {70, 30, 50, 10};
  vector<int> result = sort(arr);

  for (int x : result) {
    cout << x << " ";
  }
}