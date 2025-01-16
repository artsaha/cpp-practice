#include <iostream>
using namespace std; 
#include <string>

class Manager{

};

class TextManager {
    private: 
        string text; 
    public: 
    
    TextManager(string text) : text{text} {}

    string getText()
    {
        return text; 
    }

    void setText(string text)
    {
        this->text = text; 
    }

    bool contains_char(char searched_char)
    {
        // implement
        const char* ptr = text.c_str();
        while(*ptr != '\0')
        {
            if(*ptr == searched_char){
                return true;
            }
            ++ptr;
        }
        return false;
    }
};

string print_bool(bool res)
{
    if(res == true)
    {
        return "True";
    }
    else{
        return "False";
    }
}

int main(){
    TextManager my_text("Large context model ");
    cout << print_bool(my_text.contains_char('L')) << endl; 
    return 0;
};


