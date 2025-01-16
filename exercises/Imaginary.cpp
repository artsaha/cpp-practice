#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    // Parameterized Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Copy Constructor
    Complex(const Complex &other) : real(other.real), imaginary(other.imaginary) {}

    // Overload + operator for addition
    Complex operator+(const Complex &other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Overload * operator for multiplication
    Complex operator*(const Complex &other) const {
        double r = real * other.real - imaginary * other.imaginary;
        double i = real * other.imaginary + imaginary * other.real;
        return Complex(r, i);
    }

    // Overload == operator for equality check
    bool operator==(const Complex &other) const {
        return (real == other.real && imaginary == other.imaginary);
    }

    // Member function to display the complex number
    void display() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    // Creating complex numbers using parameterized constructor
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    // Using the copy constructor
    Complex c3 = c1;

    // Adding complex numbers
    Complex sum = c1 + c2;

    // Multiplying complex numbers
    Complex product = c1 * c2;

    // Checking equality of complex numbers
    bool isEqual = (c1 == c3);

    // Displaying results
    std::cout << "c1: ";
    c1.display();

    std::cout << "c2: ";
    c2.display();

    std::cout << "c3 (copy of c1): ";
    c3.display();

    std::cout << "Sum: ";
    sum.display();

    std::cout << "Product: ";
    product.display();

    std::cout << "c1 and c3 are equal: " << (isEqual ? "true" : "false") << std::endl;

    return 0;
}
