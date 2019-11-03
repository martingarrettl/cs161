#include <iostream>
#include <string>

using namespace std;

void swap_chars(string &str) {
  char first = str.at(0);
  str.at(0) = str.at(1);
  str.at(1) = first;
}

int main() {
  string str = "this is a string";

  swap_chars(str);

  cout << str << endl;
  
  return 0;
}
