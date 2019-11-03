#include <iostream>

using namespace std;

void update_average(double &average, int &count, double new_val) {
  double sum = average*count;
  sum += new_val;
  count += 1;
  average = sum/count;
}

int main() {
  double average=3, new_val=3;
  int count=9;

  update_average(average, count, new_val);
  cout << average << endl;

  return 0;
}
