/*
Author: Garrett Martin
Title: Lab 3
Date: 10/14/2019
Description: Generate a passcode based on user specifications for length,
             uppercase, lowercase, and numeric content.
*/


#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main () {
  int repeat, length, letters, uppercase, lowercase, numbers, uppercount = 0,
      lowercount = 0, numcount = 0;
  string passupper, passlower, passnum, passfinal = "";

do {
//welcome message and user inputs
  cout << "Welcome to Password Creator!" << endl << endl;
  cout << "How long do you want your password to be? ";
  cin >> length;
  cout << "Do you want letters in your password (0 - no, 1 - yes)? ";
  cin >> letters;
  if (letters > 0) {
    cout << "Do you want some of those letters uppercase (0 - no, 1 - yes)? ";
    cin >> uppercase;
    if (uppercase > 0) {
      cout << "How many uppercase letters (0 - " << length << ")? ";
      cin >> uppercount;
    }
    cout << "Do you want some of those letters lowercase (0 - no, 1 - yes)? ";
    cin >> lowercase;
    if (lowercase > 0) {
      cout << "How many lowercase letters (0 - " << (length - uppercount) << ")? ";
      cin >> lowercount;
    }
  }
  cout << "Do you want numbers in your password (0 - no, 1 - yes)? ";
  cin >> numbers;
  if (numbers > 0) {
    cout << "How many numbers (0 - " << length - lowercount - uppercount << ")? ";
    cin >> numcount;
  }
//generate password
srand(time(0));

for (int i = 0; i < length; i++) {
  for (int i = 0; i < numcount; i++) {
    char x;
    x = rand() % 9;
    passnum += x;
  }
  for (int i = 0; i < uppercount; i++) {
    char x;
    x = rand() % 26 + 65;
    passupper += x;
  }
  for (int i = 0; i < lowercount; i++) {
    char x;
    x = rand() % 26 + 97;
    passlower += x;
  }
}
//final password output

  cout << passnum << passupper << passlower << endl;
  cout << "Would you like to create another password (0 - no, 1 - yes)? ";
  cin >> repeat;
} while (repeat == 1);

return 0;
}
