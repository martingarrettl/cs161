/****************************************************************************
* Program: fractal.cpp
* Author: Garrett Martin
* Date: 10/30/2019
* Description: draws a self-similar pattern, yo
* Input: coupla integers
* Output: a pattern
****************************************************************************/
<<<<<<< HEAD
#include "helper_functions.h"

/****************************************************************************
Function: pattern()
Description: draws a fractal pattern comprised of asterisks.
Parameters: int n, int col
Pre-Conditions: takes two int as parameters
Post-Conditions: Print a fractal pattern to console
***************************************************************************/
void pattern(int n, int col) {

  if (n > 0) {
  pattern(n-2,col-2);
  for (int i = 0; i < col; i++) cout << "  ";
  for (int i = 0; i < n; i++) cout << "* ";
  cout << endl;

  for (int i = 0; i < col; i++) cout << "  ";
  for (int i = 0; i < n; i++) cout << "* " ;
  cout << endl;
  pattern(n+2,col+2);
}
}
=======
#include <iostream>

using namespace std;

void pattern(int n, int col);
void gimmean_int(int &num);
bool is_odd(int num);
>>>>>>> 5ebae9d6f981a26d1a80f583ac432c8ed90a3f15


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

/****************************************************************************
Function: gimmean_int()
Description: Takes a ref int as a parameter, has user assign it and checks if that
             bad boi is a real int or not then assigns that value to the ref.
Parameters: int &num
Pre-Conditions: takes integer variable as parameter
Post-Conditions: returns provided integer
***************************************************************************/
void gimmean_int(int &num) {
  int repeat = 1;

  cin >> num;

  while (repeat == 1) {
    if (cin.fail() == true) {
      cin.clear();
      cin.ignore(1000000000,'\n');
      cout << "\tERROR: Non-Integer Input\n\tInput an integer: ";
      cin >> num;
    } else {
      repeat = 0;
    }
  }
}

/****************************************************************************
Function: is_odd()
Description: Determine if an integer is odd
Parameters: int num
Pre-Conditions: take int parameter
Post-Conditions: return false if int is even, otherwise return true.
***************************************************************************/
bool is_odd(int num){
  if (num % 2 == 0){
    return false;
  }
}
