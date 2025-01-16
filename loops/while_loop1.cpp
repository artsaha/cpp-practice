#include <iostream>
using namespace std; 

int main() 
{
    int i = 0;
    
    char cstr[]  = "Hello";
    while (char c = cstr[i++]){
        cout << c << endl; 
    }
    
}