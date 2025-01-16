#include <iostream>
using namespace std; 

void HelloWorld(int a)
{
    cout << "Hello World Value:" << a << endl; 
}

int main(){

    typedef void(*HelloWorldFunction)(int);

    HelloWorldFunction my_func = HelloWorld;

    
    my_func(10);
    my_func(9);

    cin.get();
}

