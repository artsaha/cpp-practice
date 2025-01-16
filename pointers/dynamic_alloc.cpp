#include <iostream>

void processBuffer(char* buffer, int size) {
    for (int i = 0; i < size; ++i) {
        buffer[i] = 'A' + i;  // Fill buffer with 'A', 'B', 'C', ...
    }
}

int main() {
    char elems[10];  // Fixed-size array
    processBuffer(elems, 10);

    for (int i = 0; i < 10; ++i) {
        std::cout << elems[i] << " ";  // Prints: A B C D E F G H I J
    }
    return 0;
}
