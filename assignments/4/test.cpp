#include <iostream>

using namespace std;

void get_cstring(char &str);

int main(){
  char data[] = {""};
  int length;
  cout << "string: ";
  get_cstring(data);
  length = strlen(data);
  for (int i=0; i < strlen(data); i++){
    cout << data[i];
  }
  cout << endl;
  return 0;
}

void get_cstring(char &str) {
  int repeat = 1;

  cin >> str;

  while (repeat==1) {
    if (cin.fail() == true) {
      cin.clear();
      cin.ignore(10000000000, '\n');
      cout << "ERROR: bad string\nInput new string: ";
      cin >> str;
    } else {
      repeat = 0;
    }
  }
}
