#include "afunc.h"
#include <fstream>
using namespace std;

int main() {
  string filedata, filename, userstring;
  char 
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
    cin.getline()
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
    cout << "This is the repeat; 0 for dont, 1 for yep: "
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
