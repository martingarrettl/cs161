#include <iostream>

using namespace std;

main () {
   int opinion;

   cout << "Do you like using vi(m) as an editor?";
   cin << opinion;

   if (opinion == 0) {
      cout << "You love vi(m)!" << endl;
   } else {
      cout << "You hate vi(m)!" << endl;
      return 0;
   }
