/******************************************************************************
 Include guard
******************************************************************************/
#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H


/******************************************************************************
 Include dependencies
******************************************************************************/
#include <iostream> // cin.clear(), cin.ignore(), cin.fail()
#include <string> // getline(), .length(), size(), .at()
#include <cmath> // pow(), abs()
#include "helper_functions.h"

using namespace std;

/******************************************************************************
 Declarations
******************************************************************************/
bool check_range(int lower_bound, int upper_bound, int test_value);
bool is_capital(char letter);
bool is_even(int num);
bool is_odd(int num);
int equality_test(int num1, int num2);
bool float_is_equal(float num1, float num2, float precision);
bool is_int(string num);
bool numbers_present(string sentence);
bool letters_present(string sentence);
bool contains_sub_string(string sentence, string subsentence);
int word_count(string sentence);
string to_upper(string sentence);
string to_lower(string sentence);
void gimmean_int(int &num);
int a2i(char character);
bool is_letter(char character);
int greatest(int num1, int num2);
int lesser(int num1, int num2);
bool to_lowest_terms(int &numerator, int &denominator);
int g_c_d(int num1, int num2);

#endif //HELPER_FUNCTIONS_H
