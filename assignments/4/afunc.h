//=======================================
// include guard
#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H

//=======================================
// include dependencies
#include <iostream> // cin.clear(), cin.ignore(), cin.fail()
#include <cstring>
using namespace std;

//=======================================
// declarations

bool is_palindrome(char *str);
char * purge_string(char *str);
char to_lower(char a);
bool is_letter(char character);
void cleaner(char *a);
char reverse(char a);
void gimmean_int(int &num);
void print_arr(int *arr);

#endif //HELPER_FUNCTIONS_H
