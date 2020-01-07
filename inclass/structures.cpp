#include <iostream>

using namespace std;

/*****************
structures are objects without functionalities.
user defined type with multiple types
****************/
struct book{
  string title;
  int num_authors;
  string* authors;
  int pages;
};


int main(){
book *bookshelf = new book[10];
for (int i=0; i<10; i++){
  bookshelf[i].pages = 100;
  bookshelf[i].title = "Intro to CS I";
  bookshelf[i].authors = new string[2];
  for (int j=0;j<2;++j){
    bookshelf[i].authors[j] = "Name of the Author";
  }
}


 return 0;
}
