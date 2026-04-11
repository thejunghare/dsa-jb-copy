#include <iostream>
#include <vector>
using namespace std;

int sumSquares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (i * i);
    }

    return sum;
}

int main() {
    cout << sumSquares(3) << endl;
    return 0;
}

// Space complexity: O(1 + 1 + n + 1 + 1) = O(n)

/*
Challenge: I want you to look at this function, and think of a way to improve the space complexity.
Right now it’s O(n) space complexity.
But could you see a way to improve it so that it gives us the same result,
the sum of the squares of the numbers from 1 to n, but without using that extra memory space?
 Think about it, and if you see it, go ahead and make the changes.
*/