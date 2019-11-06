#include <iostream>

using namespace std;

void pattern(int n, int col) {
if (n>0) {
  pattern(--n, ++col);
  for (int i=0; i < col; i++) cout << " ";
  for (int j=0; j < n; j++) cout << "*";
  cout << endl;
  pattern(n++, col--);
}

}
int main(){

  pattern(8,0);

  return 0;
}
