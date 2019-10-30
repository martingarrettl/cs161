#include "helper_functions.h"

/****************************************************************************
Function: g_c_d()
Description: a function to calculate the greatest common divisor of two ints
Parameters: int num1, int num2
Pre-Conditions: take two integers as paramters
Post-Conditions: returns greatest common divisor for both integers
***************************************************************************/
int g_c_d(int num1, int num2) {
  for (int i=0; i <= lesser(num1,num2);i++) {
    if (lesser(num1, num2) % (lesser(num1,num2) - i) == 0
    && greatest(num1,num2) % (lesser(num1,num2) - i) == 0) {
      return lesser(num1, num2) - i;
    }
  }
}

/****************************************************************************
Function: to_lowest_terms()
Description: reduce a fraction to it's simplest form. ex: 25/100 > 1/4
Parameters: int numerator, int denominator
Pre-Conditions: take two ints as parameters
Post-Conditions:
***************************************************************************/
bool to_lowest_terms(int &numerator, int &denominator) {
  int gcd;

  if (denominator == 0) {
      return false;
  }

  gcd = g_c_d(numerator, denominator);
  numerator = numerator / gcd;
  denominator = denominator / gcd;

  return true;
}

int main() {
  int a,b,repeat=1,fail=1;

  while (repeat == 1) {
// define numerator and denominator
    cout << "Input your numerator: ";
    get_int(a);
    cout << "Input your denominator: ";
    get_int(b);
// denominator = 0
    while (b==0) {
      cout << "Invalid denominator, input non-zero integer: "
      get_int(b);
    }
// simplify fraction
    to_lowest_terms(a, b);
    cout << "Your simplified fraction is: " << a << "/" << b << endl;
// repeat?
    cout << "Do you want to do another simplification? (0-no, 1-yes): ";
    get_int(repeat);
  }
  return 0;
}
