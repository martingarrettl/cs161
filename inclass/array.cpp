#include <iostream>

using namespace std;

void init(int *arr, int size);
void print_arr(int *arr, int size);
void create_mem2(int &ref, int size);


int main() {
  int arr[5]; // initialize array with length 5 and type of integer
  int *array; //
  int *array2;
  int *array3;


  create_mem2(array2, 5);
  create_mem3(array3, 20);
  array =  new int [5];
  delete [] array;

  return 0;
}

void init(int *arr, int size) {
  for(int i = 0; i < size; i++) arr[i] = i+1;
}

void print_arr(int *arr, int size) {
  for(int i = 0; i < size; i++) cout << arr[i] << endl;
}

int *create_mem(int size) {
  int *arr = new int[size];
  return arr;
}

//pass pointer to function as reference, ptr is ref to an int*
void create_mem3(int *&heap, int size) {

}

//pass address of pointer to the int
void create_mem2(int ** ptr, int size) { //ptr to a ptr
  *ptr = new int [size];
}
