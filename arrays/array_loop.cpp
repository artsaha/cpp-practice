#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    int len_cars = end(cars) - begin(cars);
    for (int i=0;i<len_cars;i++)
    {
        cout << i+1 << ". " <<  cars[i] << "\n";
    }
}

