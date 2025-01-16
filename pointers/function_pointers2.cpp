#include <iostream>
#include <vector>
using namespace std; 

void PrintValue(int value)
{
    cout << "Value: " << value << endl;
}

void ForEach(const vector<int>& values, void(*func)(int))
{
    for (int value: values)
        func(value);
}

int main()
{
    vector<int> values = {1,5,4,2,3};
    ForEach(values, PrintValue);

    std::cin.get();
}