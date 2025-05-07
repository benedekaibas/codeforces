#include <iostream>
#include <ranges>
using namespace std;

int division(int num, int weight){
  if (weight % num == 0){
    return num;
  } else {
    return false;
  }
}


int main(){
  int result = division(2, 8);
  cout << result;
}
