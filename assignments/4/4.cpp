/****************************************************************************
* Program: assignment4.cpp
* Author: Garrett Martin
* Date: 11/22/2019
* Description: program to detect palindromes and count words basically
* Input:
* Output:
****************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

int word_count(char * source);
void tokenize(char * source, string *destination);
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

int main() {
  int choice, options=1, repeat=1, yesonemore=1;
  char user_string[1025];
  char compare_words[1025];
  string compare_tokens[256];
  string string_tokens[256];

  while(repeat==1) {
    char * temp = new char [1025];

    cout << "Input a string: ";
    cin.getline(user_string, 1024);

    cout << "What would you like to do with your string?\n";
    cout << "\t(1) Palindrome Detector\n\t(2) Frequency of all words";
    cout << "\n\t(3) Frequency of given words.\nOption: ";

    while (options==1){
      gimmean_int(choice);
      if (choice == 1) { // palindrome
        if (palindrome(user_string, temp)==1) cout << "It is a palindrome\n";
        else cout << "It is not a palindrome\n";
        options = 0;
      } else if (choice == 2){ // all word frequency
        options = 0;
        return 0;
      } else if(choice == 3){ // specific word frequency
        cout << "words to compare: ";
        cin.clear();
        cin.ignore(100000, '\n');
        cin.getline(compare_words, 1024);


        tokenize(user_string, *&string_tokens);
        tokenize(compare_words,*&compare_tokens);


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
      } else {
        cout << "ERROR: Invalid option, choose again.\nOption: ";
      }
    }
    cout << "This is the repeat; 0 for dont, 1 for yep: ";
    gimmean_int(repeat);
    options = 1;

    delete [] temp;

    while (yesonemore==1){
      if (repeat != 0 && repeat !=1){
        cout << "Try again, dingdong: ";
        gimmean_int(repeat);
      } else {
        yesonemore=0;
      }
    }
  }

  return 0;
}

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

void reverse(char * source, char * destination) {
  char a;
  for (int i=strlen(source);i>=0;i--){
    a = source[i];
    strcat(destination, &a);
  }
}

void c_string_cleaning (char * source) {
  for (int i=0;i<strlen(source);i++){
    if (is_letter(source[i])==false | source[i] != 32){
      memmove(&source[i], &source[i+1], strlen(source)-i);
      i--;
    }
  }
}

void extra_string_cleaning (char * source) {
  for (int i=0;i<strlen(source);i++){
    if (is_letter(source[i])==false){
      memmove(&source[i], &source[i+1], strlen(source)-i);
      i--;
    }
  }
}

void c_to_lower(char * source) {
  for (int i=0;i<strlen(source);i++){
    if (source[i] >= 65 && source[i] <= 90) {
      source[i] = source[i] + 32;
    }
  }
}

bool is_letter(char character) {
  if (character >= 65 && character <= 90){
    return true;
  } else if (character >= 95 && character <= 122){
    return true;
  } else {
    return false;
  }
}

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

int next_space(char * source){
  int count = 0;
  for (int i=0; i < strlen(source); i++){
    if (source[i] != 32) count++;
    else if(source[i] == 32) return count;
  }
}

void cut_string(char * source, int index){
  int count=0;
  char temp[1024];
    for (int i=index+1; i < strlen(source);i++){
      temp[count] = source[i];
      count++;
    }
  strcpy(source, temp);
}

void tokenize(char * source, string *destination){
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
