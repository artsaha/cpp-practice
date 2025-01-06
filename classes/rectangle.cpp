#include <iostream>

class Rectangle {
    private:
    int foo;
    public:
        Rectangle(int w, int l){
            width = w;
            length = l;
        }
     int width;
     int length; 
     int area(){
        return width * length; 
     };   
};

int main() {
    Rectangle r1(100,400);
    std::cout << r1.area() << std::endl;
}