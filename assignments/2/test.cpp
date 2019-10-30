#include <iostream>
using namespace std;

int get_int(int &num) {
  int repeat = 1;

  cin >> num;

  while (repeat == 1) {
    if (cin.fail() == true) {
      cin.clear();
      cin.ignore(1000000000,'\n');
      cout << "\tERROR: Non-Integer Input\n\tInput an integer: ";
      cin >> num;
    } else {
      repeat = 0;
    }
  }
}

//test conditions
int main () {
  int a;

  cout << "hit me wit an int, my dude: ";
  get_int(a);

  cout << a << endl;
  return 0;
}
