#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n = 15;
    long int n2 = 15;
    long long int n3 = 15;
    
    cout << __builtin_popcount(n) << endl;
    cout << __builtin_popcount(n2) << endl;
    cout << __builtin_popcount(n3) << endl;

    return 0;
}
