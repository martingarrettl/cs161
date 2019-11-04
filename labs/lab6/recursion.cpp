#include <iostream>

using namespace std;

int factorial(int n);

int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;

  cout << "Factorial of " << n << " is " << factorial(n) << endl;

  return 0;
}

int factorial(int n) {
  cout << n << endl;
  if (n==1) {
    return 1;
  } else {
    return n * factorial(n-1);
  }
}
