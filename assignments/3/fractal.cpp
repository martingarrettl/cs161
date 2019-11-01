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
Pre-Conditions: takes two int as parameters
Post-Conditions: Print a fractal pattern to console
***************************************************************************/
void pattern(int n, int col) {
  if is_odd(n) == true; {
    for (int j=0; j < n; j++) {
      for (int i; i < n; i++)  cout << "*";
      for (int i; i < col; i++) cout << " ";
    }
  } else {
    cout << "ERROR: Incorrect n\nInput an odd integer: ";
    gimmean_int(n);
  }
}

int main() {

  pattern(7,0);

  return 0;
}
