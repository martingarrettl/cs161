/******************************************************************************
* Program: fractions.cpp
* Author: Garrett Martin
* Date: 10/30/2019
* Description: A program to reduce a fraction to lowest terms.
* Input: int numerator, int denominator
* Output: Reduced fraction
******************************************************************************/

#include "helper_functions.h"

int main() {
  int a,b,repeat=1;

  while (repeat == 1) {
// define numerator and denominator
    cout << "Input your numerator: ";
    gimmean_int(a);
    cout << "Input your denominator: ";
    gimmean_int(b);
// denominator = 0
    while (b==0) {
      cout << "Invalid denominator, input non-zero integer: ";
      gimmean_int(b);
    }
// simplify fraction
    to_lowest_terms(a, b);
    cout << "Your simplified fraction is: " << a << "/" << b << endl;
// repeat?
    cout << "Do you want to do another simplification? (0-no, 1-yes): ";
    gimmean_int(repeat);
  }

  return 0;
}
