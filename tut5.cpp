//write a sample code to show the structure of c++ program code

//Here's a simple example to illustrate this structure:
#include <iostream>

// Function prototype

void greet();
int main(){
    std::string name ;

    std::cout <<"Enter your name:";
    std::cin>> name;

    greet();

    std:: cout<<"Hello," <<name<< "!This is a simple C++ program." <<std::endl;
    return 0;

}
void greet(){
    std::cout <<"Greetings from the function!" <<std::endl;
}