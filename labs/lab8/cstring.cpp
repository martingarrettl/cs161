#include <iostream>
#include <cstring>

using namespace std;
/*
void get_cstring(char *arr){
  int repeat=1;
  while (repeat==1){
    cin.getline(arr, 32);
    if (cin.fail()) {
      cin.ignore(1024, '\n');
      cin.clear();
      cout << "Your string was too long, try again: ";
    } else {
      repeat=0;
    }
  }
}
*/
int main(){
  char sentence[1025];

  cout << "Enter a sentence: ";
  cin.getline(sentence, 1024);
// if i exceed the limit on getline, the letters up to the limit
// will get stored in sentence, the rest hang out in cin buffer.
  cout << sentence << endl;

  return 0;
}
