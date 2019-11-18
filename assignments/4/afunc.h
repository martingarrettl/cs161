//=======================================
// include guard
#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H

//=======================================
// include dependencies
#include <iostream>
#include <cstring>
using namespace std;

//=======================================
// declarations

bool is_palindrome(char *str);
char * purge_string(char *str);
char to_lower(char a);
bool is_letter(char character);
char reverse(char a);
void gimmean_int(int &num);


#endif //HELPER_FUNCTIONS_H
