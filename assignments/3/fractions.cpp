/******************************************************************************
* Program: fractions.cpp
* Author: Garrett Martin
* Date: 10/30/2019
* Description: A program to reduce a fraction to lowest terms.
* Input: int numerator, int denominator
* Output: Reduced fraction
******************************************************************************/

#include "helper_functions.h"

/****************************************************************************
Function: g_c_d()
Description: a function to calculate the greatest common divisor of two ints
Parameters: int num1, int num2
Pre-Conditions: take two integers as paramters
Post-Conditions: returns greatest common divisor for both integers
***************************************************************************/
int g_c_d(int num1, int num2) {
  int a = lesser(num1, num2), b = greatest(num1, num2);
  for (int i=0; i <= a;i++) {
    if (a % (a - i) == 0 && b % (a - i) == 0) {
      return a - i;
    }
  }
}

/****************************************************************************
Function: to_lowest_terms()
Description: reduce fraction components to their simplest form.
             ex: 25 & 100 > 1 & 4
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
  int a,b,repeat=1;

  while (repeat == 1) {
    cout << "Numerator: ";
    gimmean_int(a);
    cout << "Denominator: ";
    gimmean_int(b);

    while (b==0) {
      cout << "\tERROR: Invalid denominator\nInput non-zero integer: ";
      gimmean_int(b);
    }

    to_lowest_terms(a, b);
    cout << "Your simplified fraction is: " << a << "/" << b << endl;

    cout << "Do you want to do another simplification? (0-no, 1-yes): ";
    gimmean_int(repeat);
  }

  return 0;
}
