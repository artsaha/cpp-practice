#include <iostream>
using namespace std; 

class Complex {
    float real;
    float imaginary;

    public:
    // Constructor with initialization list
    Complex(float real, float imaginary) : real(real), imaginary(imaginary) {}

    // Copy constructor
    Complex(const Complex& c) {
        real = c.real;
        imaginary = c.imaginary;
    }

    // Function to display the complex number
    void display(); // `const` since it doesn't modify the object
};



void Complex::display(){
    cout << real << "+" << imaginary << "*j" << endl;
}

int main(){
    Complex c(10,20);
    c.display();

    Complex c2(c);
    c2.display();
}
