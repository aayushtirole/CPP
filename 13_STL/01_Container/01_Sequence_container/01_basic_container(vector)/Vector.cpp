#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Initialization of vector
    // vector<int> vec(3,2);

    // vector<int> vec1 = {1, 2, 3, 4, 5, 6};
    // vector<int> vec2(vec1);

    vector<int> vec = {1, 2, 3, 4, 5, 6};

    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(6);

    // vec.pop_back(); //remove the last element 

    // vec.erase(vec.begin() );
    // vec.erase(vec.begin() + 2 );
    // vec.erase(vec.begin()+1, vec.begin() + 3 ); //for delete the range itn the vector 

    // vec.insert(vec.begin()+2, 100);

    vec.clear(); // for clearing the full vector 

    
   

    for (int val :vec){
        cout << val <<" ";
    }

    cout << endl;

    cout << "is empty : " << vec.empty() << endl;

    // cout << "val at idx 2 : " << vec[2] << " or " << vec.at(2)  << endl; //Print the index element 

    // cout << "front : " << vec.front()<< endl; // remove first element 
    // cout << "Back : " << vec.back()<< endl;  // remove laste element 
    return 0;
}