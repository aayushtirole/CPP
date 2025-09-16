#include <iostream>
#include <stack>
#include <vector>
#include <map>
#include <queue>
#include <string>
#include <algorithm> // <-- for sort()

using namespace std;

int main() {
    int arr[5] = {3, 4, 5, 7, 8};

    sort(arr, arr + 5); // sort needs <algorithm>

    for (auto val : arr) {
        cout << val << endl;
    }
    cout << endl;

    return 0;
}
