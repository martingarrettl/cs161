#include <iostream>

using namespace std;

void add_one(int &a) {
  a++;
}

int main() {
  int a = 5;
  add_one(a);
  cout << 5 << "plus 1 = " << a << endl;
  return 0;
}
