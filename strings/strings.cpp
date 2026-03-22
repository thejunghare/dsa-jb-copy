#include <string>
#include <iostream>

std::string coldSeason = "winter";
std::string fname = "Prasad";
std::string lname = "Junghare";
char result[] = "pass";

// strings are not a datasrtucre but very special data type very similar to arrays but not extacly array
int main(){

  std::cout << fname + ' ' + lname + '\n';
  std::cout << coldSeason.length() + '\n';
  std::cout << coldSeason[0] + '\n';
  std::cout << result;
}

// write a program to reverese a string