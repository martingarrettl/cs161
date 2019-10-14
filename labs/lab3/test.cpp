
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
  int num;
  char lletters, uletters, test;
  string final;

  srand(time(0));
  lletters = rand() % 26 + 97;
  cout << lletters << endl;

  for (int i; i < 5; i++) {
    uletters = rand() % 26 + 65;
    test =+ uletters;
  }
cout << test << endl;
return 0;
}
