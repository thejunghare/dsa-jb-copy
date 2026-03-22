#include <iostream>

void printOneToN(int n) {
    for (int i = 1; i <= n; i++) {
        std::cout << i << " ";
    }
    std::cout << "\nDONE";
}

int main() {
    printOneToN(3);
    return 0;
}

// Question:
// how long does it take to run this algorithm -> depends on how many times the loop runs : ?