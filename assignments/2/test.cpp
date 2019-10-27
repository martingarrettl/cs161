#include <iostream>
using namespace std;

bool is_num(char num) {
    if (num >= 48 && num <= 57) {
      return true;
  } else {
    return false;
  }
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

int word_count(string sentence) {
  int word_count = 0;
  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] == 32 && is_letter(sentence[i - 1])
    && is_letter(sentence[i + 1])) {
      word_count += 1;
    } else if (sentence[i] == 32 && is_num(sentence[i + 1]) && is_letter(sentence[i-1])){
      word_count += 1;
    }
  }
  return word_count + 1;
}


//test conditions
int main() {
  cout << "Testing word_count(\"12 This contains 11 four words 32\")...\n";
  cout << "\tExpected: 4\n \tActual: " << word_count("12 This contains 11 four words 32") << endl;
  (word_count("12 This contains 11 four words 32")==4? cout << "\tPASSED\n\n" :
    cout << "\tFAILED\n\n");

  cout << "Testing word_count(\"This contains four words\")...\n";
  cout << "\tExpected: 4\n \tActual: " << word_count("this contains four words") << endl;
  (word_count("this contains four words")==4? cout << "\tPASSED\n\n" :
    cout << "\tFAILED\n\n");

  return 0;
}
