#include <iostream>
#include <cstdlib>

using namespace std;

int fib_iter(int n);
int fib_rec(int n);

int main() {
  typedef struct timeval time;
  time stop, start;

  gettimeofday(&start, NULL);
  //time your iterative or recursive function here

  gettimeofday(&stop, NULL);

  if(stop.tv_sec > start.tv_sec) {
    cout << "Seconds: " << stop.tv_sec-start.tv_sec << endl;
  } else {
    cout << "Micro: " << stop.tv_usec-start.tv_usec << endl;
  }

  return 0;
}

int fib_rec(int n){
 return n - fib_rec(n - 1);
}

int fib_iter(int n){

}
