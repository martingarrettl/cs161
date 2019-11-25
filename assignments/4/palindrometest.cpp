#include <iostream>
#include <cstring>

using namespace std;

void c_to_lower(char * source);
void remove_space (char * source, char * destination);
void c_string_cleaning (char * source);
bool is_letter(char character);
void reverse(char * source, char * destination);
bool palindrome(char * test, char * temp);

/************* MAIN IS HERE **********************/
int main(){
  char str[] = "Wa4s it a 'car or a c0at I s[[[aw?";
  char * test = new char [1024];

  cout << "Is it a palindrome? " << palindrome(str, test) << endl;
/*
  if (strcmp(compare, test)==0){
    cout << "ya did it" << endl;
  }
*/
  delete [] test;

  return 0;
}
/************* MAIN IS ABOVE HERE ******************/
bool palindrome(char * test, char * temp) {
  reverse(test, temp);
  c_to_lower(test);
  c_string_cleaning(test);
  c_to_lower(temp);
  c_string_cleaning(temp);

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
    if (is_letter(source[i])==false) {
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

/*
void c_to_lower(char * source, char * destination) {
  char a[2];
  strcpy(destination, source);
  for (int i=0;i<strlen(destination);i++){
    if (destination[i] >= 65 && destination[i] <= 90) {
      destination[i] = destination[i] + 32;
    }
  }
}
*/
