#include <iostream>
using namespace std;


string return_str(){
  string text;
  cout << "Enter a text here: ";
  cin >> text;

  return text;
}

char return_first_char(){

  string res = return_str();
  return res[0];
}

string return_last_char(){
  string res = return_str();

  char last_char = res.back();

  char* p = &last_char;
  return res.erase(*p);
}

int main(){
  char first = return_first_char();
  cout << "First char is: " << first << endl;

  string last = return_last_char();
  cout << "Last char is: " << last << endl;
}
