#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};  
    
    cout << binary_search(vec.begin(), vec.end(), 10) << endl; // 10 was not present = 0 (output)
    cout << binary_search(vec.begin(), vec.end(), 1) << endl; // 1 was present = 1 (output) 
    

    return 0;
}
