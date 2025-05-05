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

int division_other_method(int num, int weight){
  while((weight > 0) && (weight <= 100)){
    if(weight % num == 0){
      return num;
    } else {
      return false;
    }
  }
  return true; //check for this line of return statement of what should be the possible return value
}

int main(){
  int result = division(2, 80);
  cout << result;
}
