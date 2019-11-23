#include <iostream>

using namespace std;

void init(int** &a, int row, int col);
void deletearr(int** a, int rows);
void print(int** &a; int row; int col);;
void populate(int** a, int row, int col);

int main(int argc, char** argv){
  int** table;

  init(table,10,10);
  populate(table, 10,10);
  print(table, 10, 10);

  return 0;
}

void populate(int** a, int row, int col){
  for (int i=0;i<row;i++){
    for (int j=0;j<col;j++){
      a[i][j]=i*j;
    }
  }
}

void print(int** a, int row, int col){
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cout << a[i][j] << "\t";
    }
  cout << endl;
  }

}

void init(int** &a, int row, int col){
  a = new int* [row];
  for (int i=0;i<col; i++) a[i]= new int [col];

  for (int i=0;i<row;i++){
    for (int j=0;j<col;i++){
      a[i][j] = 0;
    }
  }
}

void deletearr(int** a, int rows){
  for(int i=0;i<row;i++){
    delete [] a[i];
  }
  delete [] a;
}
