//program to check whether the given list b is a subset of list a or not, stored the a in a hash once then checked//

#include<bits/stdc++.h>
using namespace std;
bool isSubset(vector<int> &a, vector<int> &b){
    unordered_set<int> hash1(a.begin(),a.end());
    for(int num:b){
        if(hash1.find(num)==hash1.end()){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> a = {2,3,4,6,8,90};
    vector<int> b ={2,5,7};
    if(isSubset(a,b)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}