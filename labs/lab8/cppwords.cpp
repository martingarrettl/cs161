#include <iostream>
#include <string>

using namespace std;
string *createarray(int size){
  string *arr = new string [size];
}

void printarray(string *yes, int length) {
  for(int i=0; i < length; i++){
    cout << yes[i] << " ";
  }
}

int main(){
  int num;

  cout << "Word #: ";
  cin >> num;

  string *words = createarray(num+1);
  for (int i=0; i < num+1; i++) {
    cout << "Enter a string: ";
    getline(cin, words[i]);
  }
  printarray(words, num);
  cout << endl;

  delete [] words;
  return 0;
}
