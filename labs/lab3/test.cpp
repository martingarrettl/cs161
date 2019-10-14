
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
  int num;
  char letters;
  string test;

  srand(time(0));
/*
  for (int i = 0; i < 5; i++) {
    letters = rand() % 10 + 1;
    cout << letters << endl;
    test += letters;
  }
*/

  for (int i = 0; i < 10; i++) {
    int x;
    char y;
    x = rand() % 9 + 49;
    y = x;
    cout << x << endl << "y: " << y << endl;
}
//cout << test << endl;
return 0;
}
