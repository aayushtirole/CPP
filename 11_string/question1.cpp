// inpute a string and count all the vowels in the given string 

#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);  // take full string input including spaces

    for(int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);  // convert character to lowercase for easy checking
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    cout << "Total number of vowels: " << count << endl;
    return 0;
}
