#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool is_palindrome(char *str);
char * purge_string(char *str);
char to_lower(char a);
bool is_letter(char character);
void cleaner(char *a);
char reverse(char a);
void gimmean_int(int &num);

int main() {
  string filedata, filename, userstring;
  int choice, options=1, repeat=1;
//***********************vREMOVETHISv*************
  ifstream file;
  file.open("file.txt")
  getline(file, filedata);
//***********************^REMOVETHIS^*************
while(repeat==1) {
/************* EXTRA CREDIT OPTION *************

  cout << "Filename: ";
  get_string(filename);
  file.open(filename);

  if (!file.is_open()) {
    while(!file.is_open()){
      cout << "Incorrect file name\nFile name: ";
      get_string(filename);
      file.open(filename);
    }
  }

  file.close();

************* END EXTRA CREDIT OPTION *************/

/************* User string input option ***********
    cout << "Input a string: ";
    get_cstring(userstring);
    if (strlen(userstring) > 1024) {
      cout << "ERROR: String exceeds maximum length\nInput a string: ";
    }
*************************************************/

    cout << "Choose an Option\n\t(1) Palindrome Detector\n\t(2) Frequency of all words"
    cout << "\n\t(3) Frequency of given words.\n Option: "

    while (options==1){
      gimmean_int(choice);
      if (choice == 1) {
        options == 0;
        // PALINDROME DETECTOR
      } else if (choice == 2){
        options == 0;
        // FREQUENCY OF ALL WORDS
      } else if(choice == 3){
        options == 0;
        // FREQUENCY OF GIVEN WORDS
      } else {
        cout << "ERROR: Invalid option, choose again."
      }
    }
    cout << "This is the repeat 0 for dont, 1 for yep: "
    gimmean_int(repeat);
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
//take a string, read each character see if they're the same forward and backward

bool is_palindrome(char *str) {
  int length = strlen(str);
  for (int i=0; i < length; i++)
}

char * purge_string(char *str) {


}

void cleaner(char *a) {
  int length = strlen(a);

  for (int i=0; i < length; i++) {
    if (is_letter(a[i])==true) {
      a[i] = to_lower(a[i]);
    }
  }
}

char reverse(char a){
  int length = strlen(a), j = 0;
  char b[length];
  for (int i = length; i >= 0; i--) {
    b[j] = a[i];
    j++;
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

char to_lower(char a) {
  char b;
  if (a >= 65 && a <=95) {
    b = (a + 32);
  } else {
    b = a;
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
