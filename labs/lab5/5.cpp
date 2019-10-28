#include <iostream>
#include <string>

using namespace std;

//declare get_sentence
void get_sentence(string& s);

int main() {
  string sentence;

  sentence = get_sentence(sentence); //call get_sentence
  cout << sentence;

  return 0;
}

//define get_sentence

void get_sentence(string& s) {
  string newnew = s;

  newnew = getline(cin, s);
  s = newnew;

  return;
}
