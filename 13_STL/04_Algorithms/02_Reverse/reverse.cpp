#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {5, 3, 8, 1, 2};

    
    // reverse(vec.begin(), vec.end());
    reverse(vec.begin()+1, vec.begin()+3);


    for (auto val : vec) {
        cout << val << " ";
    }

    return 0;
}
