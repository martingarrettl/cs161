#include <iostream>
using namespace std;

int fib_iter(int n){

  }

int fib_rec(int n) {
  int fib=1;

  if (n>0) {
    fib = fib + fib_rec(n-1);
    cout << fib << endl;
  } else {
    fib = 0;
  }
  return fib;
}

int main() {
  int n;
  cout << "n: ";
  cin >> n;
  cout << "iterative: " << fib_iter(n) << endl;
  cout << "recursive: " << fib_rec(n) << endl;
}
