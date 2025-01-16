#include <iostream>
using namespace std; 

class Foo {
    public: 
        int bar; 
};

// here you have a copy of object
void func(Foo b){
    b.bar = 100;
}

// here you receive the object itself 
void func_(Foo &b){
    b.bar = 100;
}

int main() {
    Foo a;
    a.bar = 10;
    func(a);
    cout << a.bar << endl; 
    func_(a);
    cout << a.bar << endl; 
    return 0;
}
