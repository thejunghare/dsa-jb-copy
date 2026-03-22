#include<iostream>
using namespace std;

void printGroupMessage(int n) {
  cout <<'There are ' + n +  ' dinosaurs in our group.';
}

int main(){
  printGroupMessage(3);
}

// Question:
// how long does it take to run this algorithm -> depends on nested loops: