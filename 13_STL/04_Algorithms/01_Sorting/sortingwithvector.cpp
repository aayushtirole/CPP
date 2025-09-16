#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {5, 3, 8, 1, 2};

    sort(vec.begin(), vec.end());
    sort(vec.begin(), vec.end(), greater<int>());

    for (auto val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
