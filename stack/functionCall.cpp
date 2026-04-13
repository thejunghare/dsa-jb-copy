#include <iostream>
using namespace std;
void b() {
  cout << "executing b";
  cout << "return b";
}

void a() {
  cout << "executing a";
  b();
  cout << "return a";
}

int main() { a(); }