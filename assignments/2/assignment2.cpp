/**************************************************************
**Program: assignment2.cpp
**Author: Garrett Martin
**Date: 10/16/19
**Description:
**Input:
**Output:
***************************************************************/
#include "helper_functions.h"

main() {

// equality_test()
  cout << "Testing equality_test(34, 24)...\n";
  cout << "\tExpected: 1\n";
  cout << "\tActual: " << equality_test(34, 24) << endl;
  (equality_test(34, 24)==1)? cout << "\tPASSED\n\n" : cout << "\tFAILED\n\n";

  cout << "Testing equality_test(34, 34)...\n";
  cout << "\tExpected: 0\n";
  cout << "\tActual: " << equality_test(34, 34) << endl;
  (equality_test(34, 34)==0)? cout << "\tPASSED\n\n" : cout << "\tFAILED\n\n";

  cout << "Testing equality_test(24, 34)...\n";
  cout << "\tExpected: -1\n";
  cout << "\tActual: " << equality_test(24, 34) << endl;
  (equality_test(24, 34)==-1)? cout << "\tPASSED\n\n" : cout << "\tFAILED\n\n";

// float_is_equal()
  cout << "Testing float_is_equal(1.01, 1.02, 0.01)...\n";
  cout << "\tExpected: 1\n";
  cout << "\tActual: " << float_is_equal(1.01,1.02,0.01) << endl;
  (float_is_equal(1.01,1.02,0.01) == 1)? cout << "\tPASSED\n\n" : cout << "\tFAILED\n\n";

  cout << "Testing float_is_equal(1.01, 2.02, 0.01)...\n";
  cout << "\tExpected: 0\n";
  cout << "\tActual: " << float_is_equal(1.01,2.02,0.01) << endl;
  (float_is_equal(1.01,2.02,0.01) == 0)? cout << "\tPASSED\n\n" : cout << "\tFAILED\n\n";

// is_odd()
  cout << "Testing is_odd(8)...\n";
  cout << "\tExpected: 0\n \tActual: " << is_odd(8) << endl;
  (is_odd(8)==0? cout << "\tPASSED\n\n" : cout << "\tFAILED\n\n");

  cout << "Testing is_odd(21)...\n";
  cout << "\tExpected: 1\n \tActual: " << is_odd(21) << endl;
  (is_odd(21)==1? cout << "\tPASSED\n\n" : cout << "\tFAILED\n\n");

// is_even()
  cout << "Testing is_even(80)...\n";
  cout << "\tExpected: 1\n \tActual: " << is_even(8) << endl;
  (is_even(80)==1? cout << "\tPASSED\n\n" : cout << "\tFAILED\n\n");

  cout << "Testing is_even(67)...\n";
  cout << "\tExpected: 0\n \tActual: " << is_even(67) << endl;
  (is_even(67)==0? cout << "\tPASSED\n\n" : cout << "\tFAILED\n\n");

// check_range()
  cout << "Testing check_range(7, 1, 10)...\n";
  cout << "\tExpected: 1\n \tActual: " << check_range(7,1,10) << endl;
  (check_range(7,1,10)==1? cout << "\tPASSED\n\n":cout << "\tFAILED\n\n");

  cout << "Testing check_range(1, 7, 10)...\n";
  cout << "\tExpected: 0\n \tActual: " << check_range(1,7,10) << endl;
  (check_range(1,7,10)==0? cout << "\tPASSED\n\n":cout << "\tFAILED\n\n");

// is_int()
  cout << "Test is_int(\"61\")...\n";
  cout << "\tExpected: 1\n \tActual: " << is_int("61") << endl;
  (is_int("61")==1? cout << "\tPASSED\n\n": cout << "\tFAILED\n\n");

  cout << "Test is_int(\"not a number\")...\n";
  cout << "\tExpected: 0\n \tActual: " << is_int("not a number") << endl;
  (is_int("not a number")==0? cout << "\tPASSED\n\n": cout << "\tFAILED\n\n");

// is_capital()
  cout << "Testing is_capital(\'A\')...\n";
  cout << "\tExpected: 1\n \tActual: " << is_capital('A') << endl;
  (is_capital('A')==1? cout << "\tPASSED\n\n": cout << "\tFAILED\n\n");

  cout << "Testing is_capital(\'a\')...\n";
  cout << "\tExpected: 0\n \tActual: " << is_capital('a') << endl;
  (is_capital('a')==0? cout << "\tPASSED\n\n": cout << "\tFAILED\n\n");

// numbers_present()
  cout << "Testing numbers_present(\"one2three5\")...\n";
  cout << "\tExpected: 1\n \tActual: " << numbers_present("one2three5") << endl;
  (numbers_present("one2three5")==1?cout<<"\tPASSED\n\n":cout<<"\tFAILED\n\n");

  cout << "Testing numbers_present(\"onetwo\")...\n";
  cout << "\tExpected: 0\n \tActual: " << numbers_present("onetwo") << endl;
  (numbers_present("onetwo")==0?cout<<"\tPASSED\n\n":cout<<"\tFAILED\n\n");

// letters_present()
  cout << "Testing letters_present(\"one2three5\")...\n";
  cout << "\tExpected: 1\n \tActual: " << letters_present("one2three5") << endl;
  (letters_present("one2three5")==1?cout<<"\tPASSED\n\n":cout<<"\tFAILED\n\n");

  cout << "Testing letters_present(\"123\")...\n";
  cout << "\tExpected: 0\n \tActual: " << letters_present("123") << endl;
  (letters_present("123")==0?cout<<"\tPASSED\n\n":cout<<"\tFAILED\n\n");

// contains_sub_string()
  cout << "Testing contains_sub_string(\"onetwothree\", \"two\")...\n";
  cout << "\tExpected: 1\n \tActual: ";
  cout << contains_sub_string("onetwothree","two") << endl;
  (contains_sub_string("onetwothree", "onetwo") == 1? cout << "\tPASSED\n\n" :
    cout << "\tFAILED\n\n");

  cout << "Testing contains_sub_string(\"thisdoesnot\", \"two\")...\n";
  cout << "\tExpected: 0\n \tActual: ";
  cout << contains_sub_string("thisdoesnot","two") << endl;
  (contains_sub_string("thisdoesnot", "onetwo") == 0? cout << "\tPASSED\n\n" :
    cout << "\tFAILED\n\n");

// word_count()
  cout << "Testing word_count(\"This contains four words\")...\n";
  cout << "\tExpected: 4\n \tActual: " << word_count("this contains four words") << endl;
  (word_count("this contains four words")==4? cout << "\tPASSED\n\n" :
    cout << "\tFAILED\n\n");

// to_upper()
  cout << "Testing to_upper(\"make this 26 upper case\")...\n";
  cout << "\tExpected: MAKE THIS 26 UPPER CASE\n \tActual: ";
  cout << to_upper("make this 26 upper case") << endl;
  (to_upper("make this 26 upper case")=="MAKE THIS 26 UPPER CASE"?
    cout << "\tPASSED\n\n": cout << "\tFAILED\n\n");

// to_lower()
  cout << "Testing to_lower(\"1NOT2LOWERCASE27\")...\n";
  cout << "\tExpected: 1not2lowercase27\n\tActual: ";
  cout << to_lower("1NOT2LOWERCASE27") << endl;
  (to_lower("1NOT2LOWERCASE27")=="1not2lowercase27"? cout << "\tPASSED\n\n" :
    cout << "\tFAILED\n\n");

// get_int(), i assume you just determine pass or fail since the user is doin this
  string user_int;

  cout << "Testing get_int()...\n";
  cout << "\tInput an integer: ";
  cin >> user_int;
  cout << "\t" << get_int(user_int) << "\n\n";
  return 0;
}
