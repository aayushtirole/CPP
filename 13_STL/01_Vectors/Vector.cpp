#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);

    vec.pop_back(); //remove the last element 
   

    for (int val:vec){
        cout << val <<"";
    }

    cout << endl;

    // cout << "val at idx 2 : " << vec[2] << " or " << vec.at(2)  << endl; //Print the index element 

    cout << "front : " << vec.front()<< endl;
    cout << "Back : " << vec.back()<< endl;
    return 0;
}