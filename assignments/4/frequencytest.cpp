#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void givenfreq(string *source, string *compare);
void print_arr(string *arr, int len);
void token_string(string source, string *result);
void string_cleaning(string *str, int len);
string to_lower(string sentence);
bool is_letter(char character);
int word_count(string sentence);
int next_space(string source);
string cut_string(string source, int index);

int main(){
  char user_string[1025];
  char compare_words[1025];

  cout << "string: ";
  cin.getline(user_string, 1024);

  cout << "words to compare: ";
  cin.getline(compare_words, 1024);


/*
  string_cleaning(&test, test.length());
  token_string(test, *&test_words);
  token_string(compare, *&compare_words);
  givenfreq(*&test_words, *&compare_words);
*/
  return 0;
}
/********************************************************************
Function:
Description:
Parameters:
Pre-Condition(s):
Post-Condition(s):
********************************************************************/
void givenfreq(string *source, string *compare){
  int counter=0;
  for (int j=0; j < 5; j++){
    for (int i=0; i < 14;i++){
      if (source[i]==compare[j]){
        counter++;
      }
    }
    cout << compare[j] << ": " << counter << endl;
    counter = 0;
  }
}
/********************************************************************
Function:
Description:
Parameters:
Pre-Condition(s):
Post-Condition(s):
********************************************************************/
void token_string(string source, string *result){
  string temp = source + " ";
  int stop = word_count(temp);
  int count = 0;
  for(int x=0;x<stop;x++){
    for (int i=0; i < next_space(temp); i++) {
      result[count] += temp[i];
    }
    count++;
    temp = cut_string(temp, next_space(temp));
    //if (temp[0] == 32 | temp == "") stop = 0;
  }
}
/********************************************************************
Function:
Description:
Parameters:
Pre-Condition(s):
Post-Condition(s):
********************************************************************/
void string_cleaning(string *str, int len){
  string temp_str;
  for (int i=0; i < len;i++){
    if (is_letter((*str)[i])==true){
      temp_str += (*str)[i];
    } else if ((*str)[i]==32) {
      temp_str += (*str)[i];
    }
  }
  *str = to_lower(temp_str);
}
/********************************************************************
Function:
Description:
Parameters:
Pre-Condition(s):
Post-Condition(s):
********************************************************************/
string to_lower(string sentence) {
  string new_string;
  for (int i; i < sentence.length(); i++) {
    if (sentence[i] >= 65 && sentence[i] <= 90) {
      new_string += (sentence[i] + 32);
    } else {
      new_string += sentence[i];
    }
  }
  return new_string;
}
/********************************************************************
Function:
Description:
Parameters:
Pre-Condition(s):
Post-Condition(s):
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
Function:
Description:
Parameters:
Pre-Condition(s):
Post-Condition(s):
********************************************************************/
int word_count(string sentence) {
  int word_count = 0;
  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] == 32 && is_letter(sentence[i - 1])
    && is_letter(sentence[i + 1])) {
      word_count += 1;
    }
  }
  return word_count + 1;
}
/********************************************************************
Function:
Description:
Parameters:
Pre-Condition(s):
Post-Condition(s):
********************************************************************/
int next_space(string source){
  int count = 0;
  for (int i=0; i < source.length(); i++){
    if (source[i] != 32) count++;
    else if(source[i] == 32) return count;
  }
}
/********************************************************************
Function:
Description:
Parameters:
Pre-Condition(s):
Post-Condition(s):
********************************************************************/
string cut_string(string source, int index){
  string temp;
  if (index==0) return source;
  else {
    for (int i=index+1; i < source.length();i++){
      temp += source[i];
    }
    return temp;
  }
}


int word_count(char * source)
void tokenize(char * source, string *destination)
void cut_string(char * source, int index)
int next_space(char * source)
void gimmean_int(int &num)
bool is_letter(char character)
void c_to_lower(char * source)
void extra_string_cleaning (char * source)
void c_string_cleaning (char * source)
void reverse(char * source, char * destination)
bool palindrome(char * test, char * temp)
