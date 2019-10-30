#include "helper_functions.h"

int main() {
  int a,b,repeat=1;

  while (repeat == 1) {
// define numerator and denominator
    cout << "Input your numerator: ";
    get_int(a);
    cout << "Input your denominator: ";
    get_int(b);
// denominator = 0
    while (b==0) {
      cout << "Invalid denominator, input non-zero integer: ";
      get_int(b);
    }
// simplify fraction
    to_lowest_terms(a, b);
    cout << "Your simplified fraction is: " << a << "/" << b << endl;
// repeat?
    cout << "Do you want to do another simplification? (0-no, 1-yes): ";
    get_int(repeat);
  }
  return 0;
}
