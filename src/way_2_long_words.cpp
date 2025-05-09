#include <iostream>
using namespace std;


string return_str(string input_text){
  return input_text;
}

char store_first_element(){
  string text = return_str;

  for(char e : text){
    return text[0];
  }
}

int main(){
  string text = "Hey";
  string output = return_str(text);
  cout << output;
}
