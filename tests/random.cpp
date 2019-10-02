#include <iostream>
using namespace std;
#include <cstdlib>

int main () {
  srand(time(0));
  float output = 0.0 + ((rand()%5 + 5) / 100.0);
  cout << output << endl;
  return 0;
}
