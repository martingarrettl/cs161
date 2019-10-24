#include <iostream> // cin.clear(), cin.ignore(), cin.fail()
#include <string> // getline(), .length(), size(), .at()
#include <cmath> // pow(), abs()
#include "helper_functions.h"
using namespace std;

/****************************************************************************
Function: equality_test()
Description: Determine if two integers are equal
Parameters: int num1, int num2
Pre-Conditions: take two int parameters
Post-Conditions: return 1 if num1 > num 2, 0 if num1 == num2, -1 if num1 < num2
***************************************************************************/
int equality_test(int num1, int num2){
  if (num1 == num2){
    return 0;
  } else if (num1 < num2) {
    return -1;
  } else {
    return 1;
  }
}

/****************************************************************************
Function: float_is_equal()
Description: Determine if two float values are equal within a given threshold
Parameters: float num1, float num2, float precision
Pre-Conditions: take three float inputs
Post-Conditions: Return true value if the two floats are within precision
***************************************************************************/
bool float_is_equal(float num1, float num2, float precision){
  if (abs(num1 - num2) <= precision && abs(num2 - num1) <= precision) {
    return true;
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

/****************************************************************************
Function: is_even()
Description: Determine if an integer is even
Parameters: int num
Pre-Conditions: take int parameter
Post-Conditions: return true if num is even, otherwise return false
***************************************************************************/
bool is_even(int num) {
  if (num % 2 == 0) {
    return true;
  }
}

/****************************************************************************
Function: check_range()
Description: Determines if a value lay within a certain range
Parameters: int test_value, int lower_bound, int upper_bound
Pre-Conditions: Take three integers
Post-Conditions: Return true if test_value is between upper and lower bound
***************************************************************************/
bool check_range(int test_value, int lower_bound, int upper_bound) {
  if (upper_bound > test_value && lower_bound < test_value) {
    return true;
  }
}

/****************************************************************************
Function: is_int()
Description: Indicates if a given string is an integer
Parameters: string num
Pre-Conditions: take string
Post-Conditions: Return true if string value is within range of integers
***************************************************************************/
bool is_int(string num) {
  for (int i=0; i < num.length(); ++i) {
    if (num[i] >= 48 && num[i] <= 57) {
      return true;
    }
  }
}

/****************************************************************************
Function: is_capital()
Description: Indicates if a given character is a capital letter
Parameters: char letter
Pre-Conditions: take a char parameter
Post-Conditions: return true if char is a capital letter
***************************************************************************/
bool is_capital(char letter) {
  if (letter >= 65 && letter <= 90) {
    return true;
  } else {
    return false;
  }
}

/****************************************************************************
Function: numbers_present()
Description: Indicates if the provided string contains numbers
Parameters: string sentence
Pre-Conditions: take string as parameter
Post-Conditions: Return true if string has a number
***************************************************************************/
bool numbers_present(string sentence) {
  for (int i=0; i < sentence.length(); i++) {
    if (sentence[i] >= 48 && sentence[i] <= 57){
      return true;
    } else {
      return false;
    }
  }
}

/****************************************************************************
Function: letters_present()
Description: Indicates if the provided string contains letters
Parameters: string sentence
Pre-Conditions: Take string as a parameter
Post-Conditions: Return true if string has a letter
***************************************************************************/
bool letters_present(string sentence) {
  for (int i=0; i < sentence.length(); i++) {
    if (sentence[i] >= 65 && sentence[i] <= 90){
      return true;
    } else if (sentence[i] >= 95 && sentence[i] <= 122){
      return true;
    } else {
      return false;
    }
  }
}

/****************************************************************************
Function:
Description:
Parameters:
Pre-Conditions:
Post-Conditions:
***************************************************************************/
bool contains_sub_string(string sentence, string subsentence) {

}

/****************************************************************************
Function:
Description:
Parameters:
Pre-Conditions:
Post-Conditions:
***************************************************************************/
int word_count(string sentence) {

}

/****************************************************************************
Function: to_upper()
Description: Capitalizes all letters in a given string and leaves non-letters
             characters unchanged
Parameters: string sentence
Pre-Conditions: Take string as parameter
Post-Conditions: Return string
***************************************************************************/

string to_upper(string sentence) {
  string new_string;
  for (int i; i < sentence.length(); i++) {
    if (sentence[i] >= 97 && sentence[i] <= 122) {
      new_string += (sentence[i] - 32);
    } else {
      new_string += sentence[i];
    }
  }
  return new_string;
}


/****************************************************************************
Function: to_lower()
Description:
Parameters:
Pre-Conditions:
Post-Conditions:
***************************************************************************/

string to_lower(string sentence) {
  string new_string;
  for (int i; i < sentence.length(); i++) {
    if (sentence[i] >= 65 && sentence[i] <= 90) {
      new_string += (sentence[i] + 32);
    } else {
      new_string += sentence[i];
    }
  }
  return new_string;
}

/****************************************************************************
Function: atoi()
Description: turns a character into an integer value
Parameters: char character
Pre-Conditions: take character input
Post-Conditions: return decimal value of character as an int
***************************************************************************/
int atoi(char character){
  int i = character;
  return i;
}

/****************************************************************************
Function: get_int()
Description: Takes a prompt from the user as a string literal, checks if input
             is a valid integer, returns provided integer
Parameters: string prompt
Pre-Conditions: takes string as parameter
Post-Conditions:
***************************************************************************/

int get_int() {
  string prompt = "";
  cout << "Input an integer: ";
  cin >> prompt;
  do {
    if (is_int(prompt) == 1) {
      break;
    } else {
      cout << "Invalid input, please input an integer: ";
      cin >> prompt;
    }
  } while (is_int(prompt) == 0);
  return atoi(prompt[0]) - 48;
}
