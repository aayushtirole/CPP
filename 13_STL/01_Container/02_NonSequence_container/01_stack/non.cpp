#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    stack<int> s2;

    s2.swap(s);

    // while(!s.empty()){ 
    //     cout<<s.top() << " ";
    //     s.pop();
    // }

    cout << "s size : " << s.size() << endl; //0
    cout << "s2 size : " << s2.size() << endl; //3


    cout << endl;

    return 0;

}