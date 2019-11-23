#include <iostream>
#include <cstring>

using namespace std;


int main(){
  int arr[2][3]; //a 2D array of two rows and three columns
  int arr2[2][3][4]; //3D array
  int arr3[2][3][4][5]; //4D array

  for (int i=0;i<2;i++) for(int j=0;j<3;j++) arr[i][j]=0;

  // print address of pointer to 1st row pointer
  cout << &arr << endl;
  // print address of 1st row pointer
  cout << &arr[0] << endl;
  cout << arr << endl;
  // print address of 1st element in 1st row
  cout << &arr[0][0] << endl;
  cout << arr[0]
  // print address of 2nd element in 1st row
  cout << &arr[0][1] << endl;
  // print address of 1st element in 2nd row
  cout << &arr[1][0] << endl;
  // print contents of 2nd element in 2nd row
  cout << arr[1][1] << endl;

  return 0;
}
