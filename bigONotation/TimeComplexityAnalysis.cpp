#include <iostream>
using namespace std;

/*
Challenge: Analyze the time complexity of the following 4 functions.
*/

int sum(int n) {
    int sum = 0;
    for (int num = 1; num <= n; num++) {
        sum += num;
    }
    return sum;
}
// Time complexity:

void printMultiplicationTable(int n) {
    for (int a = 0; a <= n; a++) {
        for (int b = 0; b <= n; b++) {
            cout << a << " x " << b << " = " << a * b << endl;
        }
    }
}
// Time complexity:

bool isPositive(int n) {
    return n > 0;
}
// Time complexity:

void printTriangle() {
    for (int row = 1; row <= 5; row++) {
        string line = "";
        for (int col = 1; col <= row; col++) {
            line = line + '*';
        }
        cout << line << endl;
    }
}
// Time complexity:

int main() {
    // cout << sum(100) << endl;
    // printMultiplicationTable(10);
    // cout << isPositive(100) << endl;
    printTriangle();

    return 0;
}