#include <iostream>
#include <sys/time.h>
#include <cstdlib>

using namespace std;

int fib_iter(int n);
int fib_rec(int n);

int main() {
  int n;
  typedef struct timeval time;
  time stop, start;
  cout << "n: ";
  cin >> n;
  gettimeofday(&start, NULL);
  //fib_iter(n);
  fib_rec(n);

  gettimeofday(&stop, NULL);

  if(stop.tv_sec > start.tv_sec) {
    cout << "Seconds: " << stop.tv_sec-start.tv_sec << endl;
  } else {
    cout << "Micro: " << stop.tv_usec-start.tv_usec << endl;
  }

  return 0;
}

int fib_iter(int n){
  int fib=0, f1=1, f2=0;
  if (n==1) {
    return 1;
  }
  for (int i=1; i < n; i++) {
    fib = f1 + f2;
    f2 = f1;
    f1 = fib;
  }

  return fib;
}
int fib_rec(int n){
  int fib=0;
  if (n==0) return 0;
  else if (n<0) return 0;
  else if (n==1) return 1;
  else {
      return fib_rec(n-1) + fib_rec(n-2);
  }
}
