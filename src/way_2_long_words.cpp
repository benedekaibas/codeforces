#include <iostream>
using namespace std;


string return_str(string input_text){
  return input_text;
}

char store_first_element(){
  string text;
  cout << "Enter a text: ";
  cin >> text;

  string user_text = return_str(text);

  for(char f : text){
    return text[0];
  }
}

char store_last_element(){
  string text;
  cout << "Enter a text: ";
  cin >> text;

  for(char l : text){
    return text[-1];
  }
}

int main(){
  char result = store_first_element();
  cout << result;

  char second_result = store_last_element();
  cout << second_result;
}
