#include <iostream>
using namespace std;

bool isthiseven(int num){
  if (num % 2 == 0) {
    return true;
  } else {
    return false;
  }
}
//test conditions
int main() {
  cout << isthiseven(71) << endl;

  return 0;
}
