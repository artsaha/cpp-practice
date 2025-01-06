#include <iostream>
using namespace std; 
//  Math, Science, and English. The program should:

int main(){
    int a;
    cout << " Math grade : "; 
    cin >> a; 

    int b;
    cout << "Science grade: ";
    cin >> b; 

    int c;
    cout << "English grade: ";
    cin >> c;

    float mean = (a + b + c) / 3;  
    
    cout << "Average grade = " << mean << endl;

    if (mean < 60){
        cout << "F"; 
    }
    else if (mean >= 60 && mean < 70){
        cout << "D";
    }
    else if (mean >= 70 && mean < 80){
        cout << "C";
    }
    else if (mean >= 80 && mean < 90)
    {
        cout << "B";
    }
    else {
        cout << "A";
    }
    
}