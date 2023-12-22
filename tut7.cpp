// A program to overload + operator

#include <iostream>

class Complex
{
public:
    Complex() : real(0), imag(0) {}

    Complex(double r, double i) : real(r), imag(i) {}
Complex operator+(const Complex& other) const {
    Complex result;
    result.real = this->real + other.real;
    result.imag = this->imag + other.imag;
    return result;
}
 void display() const {
    std:: cout<< real<<" + " <<imag<< "i" <<std::endl;
 }

 private:
 double real;
 double imag;
};

int main(){

    Complex c1(2.0, 3.5);
    Complex c2(1.5, 2.5);

    Complex sum = c1 + c2;

    std::cout <<"Sum of the complex number:";
    sum.display ();

    return 0;

}