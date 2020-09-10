#include <iostream>
#include <typeinfo>

int main(){
  char input{};
  int count = 0;
  std::cout << "While( user == gullible )" << std::endl;
  do{
    count++;
    if(count == 10){
      std::cout << "wow, youre more patient than i am, you WIN!" << std::endl;
      break;
    }
    std::cout << "=============================" << std::endl;
    std::cout << "Enter any number besides 5:";
    std::cin >> input;
    std::cout << std::endl;
  } while(input != 'e' && (int)input != '5'); //old way of type conversion
  
  if(input == 'e'){
    std::cout << "Exiting the program" << std::endl;
  } else if(input == '5') { 
    std::cout << "Hey! you weren't supposed to enter 5!" << std::endl;
  } else {
    std::cout << "GoodBye" << std::endl;
  }
  return 0;
}
