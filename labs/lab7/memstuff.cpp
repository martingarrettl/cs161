#include <iostream>

using namespace std;

int *creatememory(int size){
  int *array = new int[size];
  return array;
}
void creatememory2(int **array, int size){
  *array = new int [size];
}
void creatememory3(int *&array, int size){
  array = new int [size];
}

int main() {
  int *array, *array2, *array3;
  array = creatememory(1024);
  creatememory2(&array2, 1024);
  creatememory3(array3, 1024);

  delete [] array;
  delete [] array2;
  delete [] array3;

  return 0;
}
