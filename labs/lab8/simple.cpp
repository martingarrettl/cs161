#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char input[50];
  int i=0;

  cin >> input;

  for (i=strlen(input); i > 0; i--) cout << input[i];
  cout << endl;

  return 0;
}