#include <iostream> // cin.clear(), cin.ignore(), cin.fail()
#include <string> // getline(), .length(), size(), .at()
#include <cmath> // pow(), abs()

bool is_capital(char letter) {
  if (letter >= 65 && letter <= 90) {
    return true;
  } else {
    return false;
  }
}

using namespace std;

int main() {
  cout << is_capital('A') << endl;
  cout << is_capital('b') << endl;
  return 0;
}
