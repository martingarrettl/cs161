#include <iostream>
#include <cstring>
#include <string>
using namespace std;

char *creatememory(int);

void get_cstring(char *arr){
  cin.getline(arr, 1024);
}
/*
char * remove_space(char * str){
  char * temp = new char [1025];
  strcpy(temp, str);
  length = strlen(temp);
  for (int i=0;i<length;i++){
    if (temp[i]==' ') {
      strcpy(&temp[i],&temp[i+1]);
      i--;
    }
  }
}
*/

void remove_space (char * source, char * destination){
  strcpy(destination, source);
  for (int i=0;i<strlen(destination);i++){
    if (temp[i]==' '){
       memmove(&temp[i], &temp[i+1], strlen(temp)-i);
       i--;
    }
  }
}
int main() {
//  char cstring[6] = {"hello\0"}
//  string cppstring = cstring // valid, but c++ to c is not without conversion
  char str[1025];
  cout << "Enter a string: ";
  get_cstring(str);
  cout << str << endl;
  char sen[] = "google";
  if (strcmp(str, sen)==0) cout << "They the same my dude.\n";

  delete [] str;
  return 0;
}
/*
char *creatememory(int size){
  char *array = new int[size];
  return array;
}
*/
