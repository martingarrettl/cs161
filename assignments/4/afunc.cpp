char * purge_string(char *str) {
  char *arr = new char [1024];
  int len = strlen(str), j=0;
  for (int i=0;i<len;i++){
    if (is_letter(str[i])==true|str[i]==32){
      arr[j]=to_lower(str[i]);
      j++;
    }
  }
  return arr;
}

bool is_palindrome(char *str){

}

bool is_letter(char character) {
  if (character >= 65 && character <= 90){
    return true;
  } else if (character >= 95 && character <= 122){
    return true;
  } else {
    return false;
  }
}

char to_lower(char a) {
  char b;
  if (a >= 65 && a <=95) {
    b = (a + 32);
  } else {
    b = a;
  }
}

void gimmean_int(int &num) {
  int repeat = 1;

  cin >> num;

  while (repeat == 1) {
    if (cin.fail() == true) {
      cin.clear();
      cin.ignore(1000000000,'\n');
      cout << "\tERROR: Non-Integer Input\n\tInput an integer: ";
      cin >> num;
    } else {
      repeat = 0;
    }
  }
}
