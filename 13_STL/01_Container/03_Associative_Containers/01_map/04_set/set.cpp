#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>

using namespace std;

int main(){

   set<int> s;

   s.insert(1);
   s.insert(2);
   s.insert(3);
   s.insert(4);

   cout << "Lower bound " << *(s.lower_bound(4)) << endl; 

    for(auto val: s){
        cout << val <<  " ";
    }

    
    return 0;
}