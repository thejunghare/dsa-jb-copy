#include <iostream>

void printPairs(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cout << i << "-" << j << std::endl;
        }
    }
    std::cout << "DONE";
}

int main() {
    printPairs(3);
    return 0;
}

// Question:
// how long does it take to run this algorithm -> depends on nested loops: