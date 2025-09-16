#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    string s = "bca";

    // next_permutation(s.begin(), s.end());
    prev_permutation(s.begin(), s.end());

    cout<<s<<endl;

    return 0;
}
