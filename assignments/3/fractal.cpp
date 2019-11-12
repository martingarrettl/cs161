/****************************************************************************
* Program: fractal.cpp
* Author: Garrett Martin
* Date: 10/30/2019
* Description:
* Input:
* Output:
****************************************************************************/
#include "helper_functions.h"

/****************************************************************************
Function: pattern()
Description: draws a fractal pattern comprised of asterisks.
Parameters: int n, int col
Pre-Condition(s): n is a positive number
Post-Condition(s): Print a fractal pattern to console
***************************************************************************/
void pattern(int n, int col) {
  if (n==0) return;
  if (n==1) {
    for (int i=0; i < col / 2; i++) cout << "  ";
    for (int i=0; i < n; i++) cout << "* ";
    cout << endl;
  } else {
    pattern(n-2, col+2);
    for (int i=0; i < col / 2; i++) cout << "  ";
    for (int i=0; i < n; i++) cout << "* ";
    cout << endl;
    pattern(n-2, col+2);
  }

}

int main() {
  int n=0, col=0, repeat=0;

  cout << "n (odd number): ";
  gimmean_int(n);
  while (repeat==0){
    if (is_odd(n)==true) {
      repeat=1;
    } else {
      "ERROR: Incorrect n\nInput an odd integer: ";
      gimmean_int(n);
    }
  }
  cout << "col: ";
  gimmean_int(col);

  pattern(n, col);

  return 0;
}
