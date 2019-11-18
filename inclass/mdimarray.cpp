#include <iostream>
#include <cstring>

using namespace std;


int main(){
  int arr[2][3]; //a 2D array
  int arr2[2][3][4]; //3D array
  int arr3[2][3][4][5]; //4D array

  for (int i=0;i<2;i++) for(int j=0;j<3;j++) arr[i][j]=0;

  return 0;
}
