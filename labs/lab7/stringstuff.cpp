#include <iostream>
#include <string>

using namespace std;

//must use these prototypes
void get_string(string *);
void set_replace_string(string, string *);
int get_search_replace(char, string, string &);
bool is_letter(char);
void get_char(char *);

int main(){
  char letter;
  string str, strcopy;
  cout << "string: ";
  get_string(&str);
  cout << str << endl;
  set_replace_string(str, &strcopy);
  cout << strcopy << endl;
  cout << "Guess a letter: ";
  get_char(&letter);
  get_search_replace(letter, str, strcopy);
  cout << strcopy << endl;

  return 0;
}

void get_string(string *str){
  cin >> *str;
}

void get_char(char *a){
  int repeat=0;
  cin >> *a;
  while (repeat=0){
    if (is_letter(*a)==0){
      cout << "Bad input, try again: " << endl;
      cin >> *a;
    } else {
      repeat=0;
    }
  }
}

void set_replace_string(string str, string *str2){
  *str2 = str;
  int length = str.length();
  for (int i=0;i<length;i++){
    if (is_letter((*str2)[i])==true)(*str2)[i] = '-';
  }
}

int get_search_replace(char letter, string str, string &str2){
  int num=0,length = str.length();
  for (int i=0;i<length;i++){
    if (str[i] == letter){
      str2[i] = letter;
      num++;
    }
  }
  cout << "number of '" << letter << "'s found is: " << num << endl;
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
