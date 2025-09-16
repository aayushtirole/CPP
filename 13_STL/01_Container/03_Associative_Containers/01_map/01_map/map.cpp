#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){

    map <string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["table"] = 120;
    m["watch"] = 58;

    // key ke according ascending order main output print hua mean first letter of every string so the sequence is h,t,t,w

    m.insert({"camera", 25});
    m.emplace("mobile", 25);

    m.erase("tv");

    for(auto p: m){
        cout << p.first << " " << p.second << endl;
    }

    // cout << "cout = " << m.count ("laptop") << endl; //print entance of the key 
    // cout << "value = " << m["laptop"] << endl; // print the value of the key 

    if (m.find("camera") != m.end()){
        cout <<"Found "<<endl;
    }else{
        cout <<"Not Found "<<endl;
    }
    
    return 0;
}