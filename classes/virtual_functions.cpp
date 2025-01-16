#include <iostream>
using namespace std; 

// A virtual function is a member function in the base class, that
// we expect to redefine in derived classes 


class Base {
    public: 
    virtual void print() {
        cout << "Base function" << endl;
    }
};

class Derived : public Base {
    public: 
    void print(){
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1; 
    Base* base1 = &derived1; 
    // not successfully overridden without virtual keyword
    base1 -> print();
    return 0;
}







