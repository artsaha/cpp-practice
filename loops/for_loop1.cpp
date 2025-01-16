#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std; 

int main()
{
    vector<int> v = {3,1,4,1,5,9};
    for(auto iter = v.begin(); iter != v.end(); ++iter)
    {
        cout << *iter << ' ';
    }

    unordered_map<string, string> u = {
        {"RED", "#FF0000"},
        {"GREEN", "#00FF00"},
        {"BLUE","#0000FF"}
    };

    auto print_key_value = [](const auto& key, const auto& value)
    {
        cout << "Key : " << key << ", Value: [" << value << "]\n";
    };

    for(const auto& [k,v]:u)
        print_key_value(k,v);
    
    

}