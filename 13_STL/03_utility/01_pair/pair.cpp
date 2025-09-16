#include<iostream>
#include<vector>
using namespace std;

int main(){

    // pair<string, int> p = {"aayush", 5};
    
    // Pair of pair
    pair<int, pair<char, int>> p = {1, {'a', 5}};

    cout << p.first <<endl;
    cout << p.second.first <<endl;
    cout << p.second.second <<endl;
    
    return 0;
}