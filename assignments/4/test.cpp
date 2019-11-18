#include <iostream>
#include <cstring>

using namespace std;

char to_lower(char a);
bool is_letter(char character);
char * purge_string(char *str);
bool is_palindrome(char *str);
char * reverse(char *str);

int main(){
  char door[] = "taco0ca5t tacocat";
  char str2[] = "chaise lounge";

  //cout << purge_string(door) << endl;
  cout << reverse(str2) << endl;
  cout << is_palindrome(str2) << endl;
/*
  cout << "Hit me wit a string my dude: ";
  cin.getline(str2, 1023);
  cout << str2 << endl;
*/
  return 0;
}

bool is_palindrome(char *str){
  cout << str << " " << reverse(str) << endl;
  if (strcmp(str, reverse(str))==0) return true;
  else return false;
}

char * reverse(char *str) {
  char *arr = new char [1024];
  arr = purge_string(str);
  int len = strlen(str), j=0;

  for (int i=len; i>= 0; i--) {
    arr[j]=str[i];
    j++;
  }
  arr[j] = '\0';
  return arr;
}

char * purge_string(char *str) {
  char *arr = new char [1024];
  int len = strlen(str), j=0;
  for (int i=0;i<len;i++){
    if (is_letter(str[i])==true|str[i]==32){
      arr[j]=to_lower(str[i]);
      j++;
    }
  }
  return arr;
}

char to_lower(char a) {
  char b;
  if (a >= 65 && a <=95) {
    b = (a + 32);
  } else {
    b = a;
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
