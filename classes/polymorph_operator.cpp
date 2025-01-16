#include <iostream>
using namespace std; 

class Count {
    private:
    int value; 

    public: 
    Count() : value(5) {} 

    void operator ++() {
        value = value + 1;
    }

    void operator --() {
        value = value - 1;
    }

    void display();    
};

void Count::display(){
    cout << "Value = " << value << endl;
};

int main()
{
    Count count1; 
    ++count1;
    count1.display();

    --count1;
    count1.display();
    return 0;
}
