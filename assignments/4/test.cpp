#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool is_letter(char character); //already in 4
void c_to_lower(char * source); // already in 4
void c_string_cleaning (char * source); // already in 4
int word_count(char * source);
void cut_string(char * source, int index);
int next_space(char * source);
void tokenize(char * source, string *destination);

int main(){
  char user_string[1025] = "test string test test seeing if i can go longer";
  char compare_words[1025] = "test string test";
  string compare_tokens[256];
  string string_tokens[256];

  tokenize(user_string, *&string_tokens);
  tokenize(compare_words,*&compare_tokens);
  /*
  string_tokens[0] = "hello";
  string_tokens[1] = "this";
  string_tokens[2] = "is a string";
  */
  //cout << "string: ";
  //cin.getline(user_string, 1024);

  //cout << "words to compare: ";
  //cin.getline(compare_words, 1024);

  for (int i=0; i < sizeof(string_tokens)/sizeof(string_tokens[0]);i++){
    if (string_tokens[i] != "") cout << string_tokens[i] << " ";
  }
  cout << endl;
  for (int i=0; i < sizeof(compare_tokens)/sizeof(compare_tokens[0]);i++){
    if (compare_tokens[i] != "") cout << compare_tokens[i] << " ";
  }
  cout << endl;

  for (int i=0; i < sizeof(compare_tokens)/sizeof(compare_tokens[0]);i++){
    int a=0;
    if (compare_tokens[i]=="") break;
    for (int j=0; j < sizeof(string_tokens)/sizeof(string_tokens[0]);j++){
      if (compare_tokens[i] == string_tokens[j]) a++;
    }
    cout << compare_tokens[i] << ": " << a << endl;
    a = 0;
  }

  return 0;
}
void user_freq(string * string_tokens, string * compare_tokens){
  for (int i=0; i < sizeof(compare_tokens)/sizeof(compare_tokens[0]);i++){
    int a=0;
    if (compare_tokens[i]=="") break;
    for (int j=0; j < sizeof(string_tokens)/sizeof(string_tokens[0]);j++){
      if (compare_tokens[i] == string_tokens[j]) a++;
    }
    cout << compare_tokens[i] << ": " << a << endl;
    a = 0;
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
    }
  count++;
  cut_string(temp, strcspn(temp," "));
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
