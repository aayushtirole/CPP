#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
   
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(5);
    l.push_front(4);
    

    l.pop_back();
    l.pop_front();

    for (int val : l){
        cout << val << " ";
        
    }

    cout << endl;


    return 0;
}