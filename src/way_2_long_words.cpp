#include <iostream>
using namespace std;


string return_str(string name){
  return name;
}

void rm_chars(string (*func)(string)){
  string name;
  string snd_name = "Benedek";
  cout << func(name) << endl; 
  cout << snd_name << endl;
}

int main(){
  string name;
  cout << "Enter your name: ";
  cin >> name;

  return_str(name);

  rm_chars(return_str);
}
