//program using hashing to check whether the two sets are disjoint or not//
#include<bits/stdc++.h>
using namespace std;
bool isDisjoint(vector<int>&a, vector<int> &b){
    unordered_set<int> hash1(a.begin(),a.end());
    for(int num: b){
        if(hash1.find(num)!=hash1.end()){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> a= {12, 34, 11, 9, 3}; 
    vector<int> b = {7, 2, 1, 5}; 
    if(isDisjoint(a,b)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
