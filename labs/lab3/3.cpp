#include <iostream>
using namespace std;

int main () {
  int length, letters, uppercase, lowercase, numbers, uppercount, lowercount, numcount;

//welcome message and user inputs
  cout << "Welcome to Password Creator!" << endl << endl;
  cout << "How long do you want your password to be? "
  cout << "Do you want letters in your password? ";
  cin >> letters;
  if (letters > 0) {
    cout << "Do you want some of those letters uppercase? (0 - no, 1 - yes)";
    cin >> uppercase;
    if (uppercase > 0) {
      cout << "How many uppercase letters? (0 - " + length ") ";
      cin >> uppercount;
    }
    cout << "Do you want some of those letters lowercase? (0 - no, 1 - yes)";
    cin >> lowercase;
    if (lowercase > 0) {
      cout << "How many lowercase letters? (0 - " << (length - uppercount) << ") ";
      cin >> lowercount;
    }
  }
  cout << "Do you want numbers in your password? (0 - no, 1 - yes)";
  cin >> numbers;
  if (numbers > 0) {
    cout << "How many numbers? (0 - " << length - lowercount - uppercount << ") ";
    cin >> numcount;
  }
//generate password
  
//final password output
  cout << passfinal << endl;
  cout << "Would you like to create another password (0 - no, 1 - yes)";
  cin << repeat;
return 0;
}
