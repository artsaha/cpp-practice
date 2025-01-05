#include <iostream>

int main() {
    int i = 25;
    int *iPtr = &i; 
    std::cout << &i << std::endl;
    std::cout << iPtr << std::endl;
    return 0;
}
