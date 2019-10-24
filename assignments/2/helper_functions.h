/****************************************************************************
Function: equality_test()
Description: Determine if two integers are equal
Parameters: int num1, int num2
Pre-Conditions: take two int parameters
Post-Conditions: return 1 if num1 > num 2, 0 if num1 == num2, -1 if num1 < num2
***************************************************************************/
int equality_test(int num1, int num1){
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
  if ((upper_bound > test_value) && (lower_bound < test_value)) {
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
    if (a[i] >= 48) && (a[i] <= 57) {
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
  if (letter >= 65) && (letter <= 90) {
    return true;
  }
}

/****************************************************************************
Function:
Description:
Parameters:
Pre-Conditions:
Post-Conditions:
***************************************************************************/
bool numbers_present(string sentence) {

}

/****************************************************************************
Function:
Description:
Parameters:
Pre-Conditions:
Post-Conditions:
***************************************************************************/
bool letters_present(string sentence) {

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
Function:
Description:
Parameters:
Pre-Conditions:
Post-Conditions:
***************************************************************************/
string to_upper(string sentence) {

}

/****************************************************************************
Function:
Description:
Parameters:
Pre-Conditions:
Post-Conditions:
***************************************************************************/
string to_lower(string sentence) {

}

/****************************************************************************
Function:
Description:
Parameters:
Pre-Conditions:
Post-Conditions:
***************************************************************************/
int get_int(string prompt) {

}
