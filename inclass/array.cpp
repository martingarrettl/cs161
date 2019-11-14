#include <iostream>

using namespace std;

void init(int *arr, int size);
void print_arr(int *arr, int size);

int main() {
  int arr[5]; // initialize array with length 5 and type of integer
  int *array; //

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
