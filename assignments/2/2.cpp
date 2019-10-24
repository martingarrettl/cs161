/******************************************************************************
**Program: assignment2.cpp
**Author: Garrett Martin
**Date: 10/16/19
**Description:
**Input:
**Output:
******************************************************************************/

#include <iostream> // cin.clear(), cin.ignore(), cin.fail()
#include <string> // getline(), .length(), size(), .at()
#include <cmath> // pow(), abs()

using namespace std;

int equality_test(int num1, int num1){
  if (num1 == num2){
    return num1;
  } else {
    return 0;
  }
}
int float_is_equal(float num1, float num2, float precision){
  bool result;

TKTKTKTK

  return result;
}

int is_odd(int num){
  bool result;

  if (num % 3 == 0){
    result = true;
  }
  return result;
}

int is_even(int num) {
  bool result;

  if (num % 2 == 0) {
    result = true;
  } else {
    result = false;
  }
  return result;
}

int check_range(int test_value, int lower_bound, int upper_bound) {
  bool result;

  if (test_value > lower_bound) {
    if (test_value < upper_bound) {
      result = true;
    }
  } else {
      result = false;
  }

  return result;
}


main() {
  int a, b, c;
  bool f,g;

  cout << "Test #: ";
  cin >> a;
  cout << "Lower bound: ";
  cin >> b;
  cout << "Upper bound: ";
  cin >> c;

  g = is_even(a);
  f = check_range(a, b, c);

  cout << "Range: " << f << endl;
  cout << "Is even: " << g << endl;
  return 0;
}
