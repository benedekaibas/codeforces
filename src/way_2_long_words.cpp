#include <iostream>
using namespace std;


string return_str(string input_text){
  return input_text;
}

char return_first_char(){
  string text;
  cout << "Enter a text here: ";
  cin >> text;

  string res = return_str(text);

  return res[0];
}

int main(){
  char result = return_first_char();
  cout << "First char is: " << result << endl;
}
