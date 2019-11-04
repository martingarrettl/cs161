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
//print an * at the midpoint
  for (int i=0; i < abs(n+col) / 2 ; i++) cout << "  ";
  for (int i=0; i < abs(n-(n-1)) ; i++) cout << "* ";
  cout << endl;
//print variable *
  for (int i=0; i < abs(n+col) - ((n*col)/2) - 2; i++) cout << "  ";
  for (int i=0; i < (n * col)/2;i++) cout << "* ";
  cout << endl;


  if (col <= 4 * n + 2) pattern(n-1, col + 1);
}

int main() {
  int n=7, col=0, repeat=0;
/*
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
*/
  pattern(n, col);

  return 0;
}
