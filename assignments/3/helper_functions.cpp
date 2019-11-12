#include "helper_functions.h"

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
  } else {
    return false;
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
  } else {
    return false;
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
    }
  }
  return false;
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
Function: contains_sub_string()
Description: Indicates if a substring exists within a sentence
Parameters: string sentence, string subsentence
Pre-Conditions: take two strings as parameters
Post-Conditions: returns true if subsentence exists within string, false otherwise
***************************************************************************/
bool contains_sub_string(string sentence, string subsentence) {
  string new_string = "";
  if (sentence == subsentence) {
    return true;
  } else {
    for (int i = 0; i < sentence.length(); i++) {
      if (sentence[i] == subsentence[0]) {
        for (int j = 0; j < subsentence.length(); j++) {
          if (sentence[i + j] == subsentence[j]) {
            new_string += subsentence[j];
          } else {
            new_string = "";
          }
            if (new_string == subsentence) {
              return true;
            }
        }
      }
    }
  }
  return false;
}
/****************************************************************************
Function: is_letter()
Description: it's letters_present, but for a character because im lazy
Parameters: char character
Pre-Conditions: Takes a character as a parameter
Post-Conditions: Returns true if input is, in fact, a letter.
***************************************************************************/
bool is_letter(char character) {
  if (character >= 65 && character <= 90){
    return true;
  } else if (character >= 95 && character <= 122){
    return true;
  } else {
    return false;
  }
}

/****************************************************************************
Function: word_cout()
Description: Counts the number of words in a string, sort of. See end comment.
Parameters: string sentence
Pre-Conditions: Takes string as a parameter
Post-Conditions: Returns the number of words in a specific type of sentence.
***************************************************************************/
int word_count(string sentence) {
  int word_count = 0;
  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] == 32 && is_letter(sentence[i - 1])
    && is_letter(sentence[i + 1])) {
      word_count += 1;
    }
  }
  return word_count + 1;
}
/* this function isn't great, doesn't count words immediately following numbers
or other non-letter characters. Have to assume it's an all word string to use.
really, it's just more of a slightly more specific space counter */

/****************************************************************************
Function: to_upper()
Description: Capitalizes all letters in a given string and leaves non-letters
             characters unchanged
Parameters: string sentence
Pre-Conditions: Take string as parameter
Post-Conditions: Return string, but this time all upper case
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
Description: Takes a string and changes all capital letters to lowercase
             while leaving all non-letters unchanged.
Parameters: string sentence
Pre-Conditions: take string as input
Post-Conditions: return string, but this time all lower case.
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
Function: a2i()
Description: Takes a character and returns its corresponding dec value
Parameters: char character
Pre-Conditions: take character input
Post-Conditions: return decimal value of character as an int
***************************************************************************/
int a2i(char character){
  int i = character;
  return i;
}

/****************************************************************************
Function: get_int()
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
