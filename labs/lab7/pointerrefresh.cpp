#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
  string str,str2;
  string * ptr;
  ptr = &str2;

  str = "google";
  str2 = "gooooooogle";
/*
  cout << str << endl; // print "google"
  cout << &str << endl; // print address of str
  cout << str2 << endl; // print "gooooooogle"
  cout << &str2 << endl; // print address of str2
 // assign the value of the memory the pointer points to to "twenty"
  *ptr = "twenty";
  cout << ptr << endl; // print address of memory ptr points to
  cout << *ptr << endl; // print value of ptr, "twenty"
  cout << str2 << endl; // this now prints "twenty"
*/

  int i=1;
  cout << (*ptr)[i] << endl;
  (*ptr)[i] = 'i';
  cout << *ptr << endl;
  return 0;
}
