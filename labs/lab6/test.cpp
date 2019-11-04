#include <iostream>
using namespace std;

int fib_iter(int n){
  int fib;
  if (n == 0) {
    fib = 0;
  } else if (n==1) {
    fib = 1;
  } else {
      fib = 2;
      fib = fib + (fib - 1);
    }
  return fib;
  }

int fib_rec(int n) {
  int fib=1;

  if (n>0) {
    fib = fib + fib_rec(n-1);
  } else {
    fib = 0;
  }
  return fib;
}

int main() {
  int n=7;
  cout << fib_iter(n) << endl;
  cout << fib_rec(n) << endl;
}
