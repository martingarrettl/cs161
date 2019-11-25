/****************************************************************************
* Program: assignment4.cpp
* Author: Garrett Martin
* Date: 11/22/2019
* Description: program to detect palindromes and count words basically
* Input: user input string
* Output: Tells if you if a string is a palindrome, also numbers of words
****************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

void cleanup(string *source);
int word_count(char * source);
void tokenize_1(char * source, string *destination);
void tokenize_2(char * source, string *destination);
void cut_string(char * source, int index);
int next_space(char * source);
void gimmean_int(int &num);
bool is_letter(char character);
void c_to_lower(char * source);
void extra_string_cleaning (char * source);
void c_string_cleaning (char * source);
void reverse(char * source, char * destination);
bool palindrome(char * test, char * temp);
void user_freq(string * string_tokens, string * compare_tokens);
void create_memory(string ** array, int size);

int main() {
  int choice, options=1, repeat=1, yesonemore=1;
  char user_string[1025];
  char compare_words[1025];
  string compare_tokens[256];
  string string_tokens[256];

  while(repeat==1) {
    char * temp = new char [1025]; // Used in palindrome
    string *cmp_tokens; // used in specific word frequency

    cout << "Input a string: ";
    cin.getline(user_string, 1024);

    cout << "What would you like to do with your string?\n";
    cout << "\t(1) Palindrome Detector\n\t(2) Frequency of all words";
    cout << "\n\t(3) Frequency of given words.\nOption: ";

    while (options==1){
      gimmean_int(choice);
/***************  start palindrome ************************************/
      if (choice == 1) {
        if (palindrome(user_string, temp)==1) cout << "It is a palindrome\n";
        else cout << "It is not a palindrome\n";
        options = 0;
/***************  end palindrome *************************************/
/***************  start all word frequency ***************************/
// technically this works, however I would like to fix this
// so it's unique tokens only
      } else if (choice == 2){
        tokenize_1(user_string, *&string_tokens);
        strcpy(compare_words, user_string);
        tokenize_1(compare_words,*&compare_tokens);
        //for whatever reason i couldn't get a function to print these
        for (int i=0; i < sizeof(compare_tokens)/sizeof(compare_tokens[0]);i++){
          int a=0;
          if (compare_tokens[i]=="") break;
          for (int j=0; j < sizeof(string_tokens)/sizeof(string_tokens[0]);j++){
            if (compare_tokens[i] == string_tokens[j]) a++;
          }
          cout << compare_tokens[i] << ": " << a << endl;
          a = 0;
        }
        options = 0;
/***************  end all word frequency *****************************/
/***************  start specific word frequency **********************/
      } else if(choice == 3){
        cout << "Words you want the frequency of: ";
        cin.clear();
        cin.ignore(100000, '\n');
        cin.getline(compare_words, 1024);
        create_memory(&cmp_tokens, word_count(compare_words));
        tokenize_1(user_string, *&string_tokens);
        tokenize_2(compare_words, cmp_tokens);
        //for whatever reason i couldn't get a function to print these
        for (int i=0; i < sizeof(cmp_tokens);i++){
          int a=0;
          if (cmp_tokens[i]=="") break;
          for (int j=0; j < sizeof(string_tokens)/sizeof(string_tokens[0]);j++){
            if (cmp_tokens[i] == string_tokens[j]) a++;
          }
          cout << cmp_tokens[i] << ": " << a << endl;
          a = 0;
        }
        options = 0;
/***************  end specific word frequency **********************/
      } else {
        cout << "ERROR: Invalid option, choose again.\nOption: ";
      }
    }
/***************  Loop program & clean up **************************/
    cout << "This is the repeat; 0 for dont, 1 for yep: ";
    gimmean_int(repeat);
    options = 1;
    cin.clear();
    cin.ignore();

    delete [] temp;
    delete [] cmp_tokens;

    while (yesonemore==1){
      if (repeat != 0 && repeat !=1){
        cout << "Try again, dingdong: ";
        gimmean_int(repeat);
      } else {
        yesonemore=0;
      }
    }
/***************  End Program Loop *****************************/
  }

  return 0;
}
/********************************************************************
Function: create_memory()
Description: allocates memory for a string array
Parameters: string ** array, int size
Pre-Condition(s): accepts a string pointer and integer
Post-Condition(s): allocates size memory for string array
********************************************************************/
void create_memory(string ** array, int size) {
  *array = new string [size];
}
/********************************************************************
Function: user_freq()
Description: supposed to print frequencies of words, but doesnt.
Parameters: string * string_tokens, string * compare_tokens
Pre-Condition(s): accepts them pointers
Post-Condition(s): prints frequency of words
********************************************************************/
void user_freq(string * string_tokens, string * compare_tokens){
  for (int i=0; i < sizeof(compare_tokens)/sizeof(compare_tokens[0]);i++){
    int a=0;
    cout << string_tokens[i] << " & " << compare_tokens[i];
    if (compare_tokens[i]=="") break;
    for (int j=0; j < sizeof(string_tokens)/sizeof(string_tokens[0]);j++){
      if (compare_tokens[i] == string_tokens[j]) a++;
    }
    cout << compare_tokens[i] << ": " << a << endl;
    a = 0;
  }
}
/********************************************************************
Function: palindrome()
Description: Cleans a string of unwanted characters and
             determines if it's a palindrome
Parameters: char * test, char * temp
Pre-Condition(s): accepts two c-style strings
Post-Condition(s): if it's a palindrome, returns true otherwise false
********************************************************************/
bool palindrome(char * test, char * temp) {
  reverse(test, temp);
  c_to_lower(test);
  extra_string_cleaning(test);
  c_to_lower(temp);
  extra_string_cleaning(temp);
  if (strcmp(temp,test)==0){
    return true;
  } else {
    return false;
  }
}
/********************************************************************
Function: reverse()
Description: reverses a c-style string
Parameters: char * source, char * destination
Pre-Condition(s): accepts those strings, my dude
Post-Condition(s): returns a reversed c-style string
********************************************************************/
void reverse(char * source, char * destination) {
  char a;
  for (int i=strlen(source);i>=0;i--){
    a = source[i];
    strcat(destination, &a);
  }
}
/********************************************************************
Function: c_string_cleaning()
Description: cleans a c-style string of unwanted characters
Parameters: char * source
Pre-Condition(s): accepts a c-style string
Post-Condition(s): returns that bad boy without the junk
********************************************************************/
void c_string_cleaning (char * source) {
  for (int i=0;i<strlen(source);i++){
    if (is_letter(source[i])==false | source[i] != 32){
      memmove(&source[i], &source[i+1], strlen(source)-i);
      i--;
    }
  }
}
/********************************************************************
Function: extra_string_cleaning()
Description: same thing as the last one, but also removes spaces
Parameters: char * source
Pre-Condition(s): accepts a c-style string
Post-Condition(s): cleans that string up thoroughly
********************************************************************/
void extra_string_cleaning (char * source) {
  for (int i=0;i<strlen(source);i++){
    if (is_letter(source[i])==false){
      memmove(&source[i], &source[i+1], strlen(source)-i);
      i--;
    }
  }
}
/********************************************************************
Function: c_to_lower()
Description: takes all letters of a c-style string and makes them lower case
Parameters: char * source
Pre-Condition(s): accepts a c-style string
Post-Condition(s): returns string lowerized
********************************************************************/
void c_to_lower(char * source) {
  for (int i=0;i<strlen(source);i++){
    if (source[i] >= 65 && source[i] <= 90) {
      source[i] = source[i] + 32;
    }
  }
}
/********************************************************************
Function: is_letter()
Description: checks if a character is a letter
Parameters: char character
Pre-Condition(s): accepts a character
Post-Condition(s): returns a bool value based on the chars letter-ness
********************************************************************/
bool is_letter(char character) {
  if (character >= 65 && character <= 90){
    return true;
  } else if (character >= 95 && character <= 122){
    return true;
  } else {
    return false;
  }
}
/********************************************************************
Function: gimmean_int()
Description: gives me an int, and only an int.
Parameters: int &num
Pre-Condition(s): accepts a memory location for an integer
Post-Condition(s): gets a good int value for ya
********************************************************************/
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
/********************************************************************
Function: next_space()
Description: locates the next space character in a c-style string
Parameters: char * source
Pre-Condition(s): i dont even think i use this one anymore
Post-Condition(s): returns an integer value for the position of the next
                   space character in the c-string
********************************************************************/
int next_space(char * source){
  int count = 0;
  for (int i=0; i < strlen(source); i++){
    if (source[i] != 32) count++;
    else if(source[i] == 32) return count;
  }
}
/********************************************************************
Function: cut_string()
Description: removes part of a c-string from 0 to the provided index
Parameters: char * source, int index
Pre-Condition(s): accepts a c-string, and an index to cut to
Post-Condition(s): cuts that dang string up
********************************************************************/
void cut_string(char * source, int index){
  int count=0;
  char temp[1024];
    for (int i=index+1; i < strlen(source);i++){
      temp[count] = source[i];
      count++;
    }
  strcpy(source, temp);
}
/********************************************************************
Function: tokenize_1()
Description: accepts a c-string, cuts each word into tokens and puts them
             into a c++ string array.
Parameters: char * source, string * destination
Pre-Condition(s): accepts a c-style string and a c++ string array;
Post-Condition(s): makes tokens out of that dang string.
********************************************************************/
void tokenize_1(char * source, string *destination){
  char temp[1024];
  cleanup(destination);
  strcpy(temp, source);
  strcat(temp, " ");
  int count = 0, stop = word_count(source);
  while (count < stop){
    for(int j=0; j < strcspn(temp," ");j++){
      destination[count] += temp[j];
    }
  count++;
  cut_string(temp, strcspn(temp," "));
  }
}
/********************************************************************
Function: tokenize_1()
Description: accepts a c-string, cuts each word into tokens and puts them
             into a c++ string array, this one plays better with types of c++
             string arrays.
Parameters: char * source, string * destination
Pre-Condition(s): accepts a c-style string and a c++ string array;
Post-Condition(s): makes tokens out of that dang string.
********************************************************************/
void tokenize_2(char * source, string *destination){
  char temp[1024];
  strcpy(temp, source);
  strcat(temp, " ");
  int count = 0, stop = word_count(source);
  while (count < stop){
    for(int j=0; j < strcspn(temp," ");j++){
      destination[count] += temp[j];
    }
  count++;
  cut_string(temp, strcspn(temp," "));
  }
}
/********************************************************************
Function: cleanup()
Description: empties a c++ string array's contents
Parameters: string *source
Pre-Condition(s): accepts a c++ string array
Post-Condition(s): empties that bad boi
********************************************************************/
void cleanup(string *source){
  for (int i=0; i < sizeof(source);i++){
    source[i] = "";
  }
}
/********************************************************************
Function: word_count()
Description: counts words
Parameters: char * source
Pre-Condition(s): accepts a c-style string
Post-Condition(s): returns the word count of said string
********************************************************************/
int word_count(char * source) {
  int word_count = 0;
  for (int i = 0; i < strlen(source); i++) {
    if (source[i] == 32 && is_letter(source[i - 1])
    && is_letter(source[i + 1])) {
      word_count += 1;
    }
  }
  return word_count + 1;
}
