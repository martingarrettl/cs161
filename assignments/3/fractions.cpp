/******************************************************************************
* Program: fractions.cpp
* Author: Garrett Martin
* Date: 10/30/2019
* Description: A program to reduce a fraction to lowest terms.
* Input: int numerator, int denominator
* Output: Reduced fraction
******************************************************************************/

#include <iostream>

using namespace std;

int greatest(int num1, int num2);
int lesser(int num1, int num2);
bool to_lowest_terms(int &numerator, int &denominator);
int g_c_d(int num1, int num2);
void gimmean_int(int &num);

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
/****************************************************************************
Function: greatest()
Description: returns the greater of two integers
Parameters: int num1, int num2
Pre-Conditions: takes two integers
Post-Conditions: returns greatest of the two
***************************************************************************/
int greatest(int num1, int num2) {
  if (num1 < num2) {
    return num2;
  } else {
    return num1;
  }
}

/****************************************************************************
Function: lesser()
Description: returns the lesser of two integers
Parameters: int num1, int num2
Pre-Conditions: takes two integers
Post-Conditions: returns integer of least value
***************************************************************************/
int lesser(int num1, int num2){
  if (num1 < num2) {
    return num1;
  } else {
    return num2;
  }
}
/****************************************************************************
Function: gimmean_int()
Description: Takes a ref int as a parameter, takes user input and checks if that
             bad boi is a real int or not then ends.
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
