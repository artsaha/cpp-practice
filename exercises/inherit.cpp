#include <iostream>
#include <cmath>
#include <vector>
#include <memory>
using namespace std; 

class Shape{
    public:
    
    virtual double area();
    virtual void display();
};

class Circle : public Shape {
    private:
    double radius;
    public: 
    double area(){
        return radius * radius * 3.14; 
    }

    void display(){
        
    }

};
