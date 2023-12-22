//write a program to show that working  of construction along inherited class

#include <iostream>

class Shape {
public:
Shape (int x, int y) : x_(x), y_(y) {
    std::cout <<"Shape constructor called with x =" << x_ << "and y=" << y_ <<std::endl;
}
void displayPosition() const {
    std::cout <<"Shape position:("<< x_ <<", "<< y_ <<")" <<std::endl;
}
private:
int x_;
int y_;
};

