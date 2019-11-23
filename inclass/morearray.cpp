#include <iostream>

using namespace std;

int **creat_2darray(int, int);

int main(){
int rows, cols;
int **array3;

create_2darray(&array, rows, cols)

  return 0;
}

int **create_2darray(int r, int c) {
  int **a;

  a = new int*[r];
  for(int i=0;i<r;i++) a[i]=new int[c];

  return a;

}

void create_2darray2(int ***a, int r, int c){
  *a =
}

void create_2array3(int **&a, int r, int c){
  a = new int[r];
  for (int i=0;i<r;i++) a[i]=new int[c];
}
