#include <iostream>
#include <cstring>

using namespace std;

bool is_letter(char character);
string to_lower(string sentence);
void extra_string_cleaning(string *str, int len);

int main(){
  char str[] = "t4aco0c a 7t";
  //string array[10];

  //extra_string_cleaning(&str, strlen(str));
  cout << str << endl;

  return 0;
}
/*
void c_string_cleaning(char *str, int len){
  char [] temp_str;
  for (int i=0; i < len;i++){
    if (is_letter((*str)[i])==true){
      temp_str += (*str)[i];
    }
  }
  *str = to_lower(temp_str);
}

void c_to_lower(string sentence) {
  char [] new_string;
  for (int i; i < sentence.length(); i++) {
    if (sentence[i] >= 65 && sentence[i] <= 90) {
      new_string += (sentence[i] + 32);
    } else {
      new_string += sentence[i];
    }
  }
  return new_string;
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
*/
