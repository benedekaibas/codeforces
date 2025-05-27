#include <iostream>
#include <utility>
#include <string>


std::string name(){
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;

  return name;
}

std::string rm_first_char(std::string remove){
  std::string* ptr = &remove;
  ptr->erase(1);

  return *ptr;
}

std::pair<std::string, std::string> return_original_modified(std::string &rm_char){
  std::string modified = rm_char;
  modified.erase(1);
  //these two lines are only for checking if the function works well
  std::cout << rm_char << std::endl;
  std::cout << modified << std::endl;
  
  return{rm_char, modified};
}



int main(){
  std::string usr_name = name();
  std::pair<std::string, std::string> remove_name = return_original_modified(usr_name);

  //std::cout << remove_name << std::endl;
}
