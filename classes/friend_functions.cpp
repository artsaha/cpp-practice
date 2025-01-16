#include <iostream>
using namespace std; 


// A friend function can access the private and 
// protected data of a class 
class Distance {
    private:
    int meter; 

    // 
    friend int addFive(Distance);

    public: 
    Distance(): meter(0){} 

};



int addFive(Distance d){
    d.meter += 5;
    return d.meter; 
};

int main(){
    Distance D;
    cout << "dist : " << addFive(D);
    return 0;
}






