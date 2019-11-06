#include <iostream>
using namespace std;

int fib_iter(int n){
  int fib=0, f1=1, f2=0;
  if (n==1) {
    return 1;
  }
  for (int i=1; i < n; i++) {
    fib = f1 + f2;
    f2 = f1;
    f1 = fib;
  }

  return fib;
}

int fib_rec(int n){
  int fib=0;
  if (n==0) return 0;
  else if (n<0) return 0;
  else if (n==1) return 1;
  else {
      return fib_rec(n-1) + fib_rec(n-2);
  }
}

int main() {
  int n=5;

  cout << "n: ";
  cin >> n;
  cout << "iterative fib: " << fib_iter(n) << endl;
  cout << "recursive fib: " << fib_rec(n) << endl;
}
