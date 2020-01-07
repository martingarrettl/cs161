#include <iostream>

using namespace std;

void s_towers(int number_of_disks, int b[][3], int from_col, int to_col, int spare);
void print_s_array(int ar[][3], int disks);
void move_disk(int b[][3],int number_of_disks, int from_col, int to_col);

void d_towers(int number_of_disks, int b[][3], int from_col, int to_col, int spare);
void print_d_array();


int main(int argc, char **argv){

  //static
  if (argc == 1) {
    int static_board[3][3] =
    {
      {1,0,0},
      {2,0,0},
      {3,0,0}
    };

    //print_s_array(static_board,3);
    s_towers(3,static_board,1,2,3);
  }
  /* dynamic_board
  int n=0;
  if (argc>is_num(1)) {
    int ** dynamic_board;
    n=atoi(argv[1]);
    create_array(dynamic_board, n);
    d_towers(n,dynamic_board,1,2,3);
    delete_2d(dynamic_board);
  }
*/
  return 0;
}

void move_disk(int b[][3],int number_of_disks, int from_col, int to_col){
  if (b[number_of_disks][from_col]!=0){
    b[number_of_disks][to_col]=b[number_of_disks][from_col];
  }
}

void s_towers(int number_of_disks, int b[][3], int from_col, int to_col, int spare){
  s_towers(number_of_disks-1,b,from_col,spare,to_col);
  move_disk(b,number_of_disks, from_col, to_col);
  print_s_array(b,3);
  s_towers(number_of_disks-1,b,spare,to_col,from_col);
}

void print_s_array(int arr[][3], int disks){
  for (int i=0;i<disks;i++){
    for (int j=0;j<3;j++){
      cout << arr[i][j] << " ";
    }
  cout << endl;
  }
}
/*
int create_array(int *array, int rows){
  for (int i=0;i<rows;i++){
    (*array)[i] = new int [];
  }
  for (int i=0;i<rows;i++){
    for (int j=0;j<3;j++){


    }
  }
}

void delete_2d(int ** ptr, int rows){
  for (int i=0;i < rows;i++){
    delete [] (*ptr)[i];
  }
  delete [] ptr;
}
*/
