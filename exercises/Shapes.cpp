#include <iostream>
#include <vector>
#include <memory>
#include <cmath>

// Base class: Shape
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function for area
    virtual void display() const = 0; // Pure virtual function for display
    virtual ~Shape() = default; // Virtual destructor
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    void display() const override {
        std::cout << "Circle: Radius = " << radius 
                  << ", Area = " << area() << std::endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    void display() const override {
        std::cout << "Rectangle: Length = " << length 
                  << ", Width = " << width 
                  << ", Area = " << area() << std::endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() const override {
        return 0.5 * base * height;
    }

    void display() const override {
        std::cout << "Triangle: Base = " << base 
                  << ", Height = " << height 
                  << ", Area = " << area() << std::endl;
    }
};

int main() {
    // Array of pointers to Shape objects
    std::vector<std::unique_ptr<Shape>> shapes;

    // Adding different shapes
    shapes.push_back(std::make_unique<Circle>(5.0));
    shapes.push_back(std::make_unique<Rectangle>(4.0, 6.0));
    shapes.push_back(std::make_unique<Triangle>(3.0, 7.0));

    // Demonstrating polymorphism
    for (const auto &shape : shapes) {
        shape->display();
    }

    return 0;
}
