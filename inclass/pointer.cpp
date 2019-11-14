#include <iostream>

using namespace std;

/*
void increment(int &num1, int &num2) {
  num1 = num1 + num2;
}
*/

int main(){
  int a=7, b=12;

  cout << "a: " << a << "\nb: " << b << endl;
  cout << "a lives at: " << &a << endl;
  cout << "b lives at: " << &b << endl;

  int &r = b;
  cout << "r: " << r << "\nr lives at: " << &r << endl;

  int *p;
  p = &a;
  cout << "p: " << *p << "\np lives at: " << &p << endl;
  return 0;
}
