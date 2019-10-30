#include <iostream>
#include <string>

using namespace std;

void get_string(string &s) {
  getline(cin, s);
}

int main() {
  string sentence;

  get_string(sentence);
  cout << sentence << endl;

  return 0;
}
