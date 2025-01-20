//use hashing to check if the two sets are equal
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool isEqual(vector<int>&a, vector<int> &b){
    int m = a.size();
    int n= a.size();
    if(m!=n){
        return false;
    }
    unordered_map<int , int> mm;
    for(int i=0; i<m; i++)  mm[a[i]]++;
    for(int i=0; i<m; i++){
        if(mm.find(b[i])==mm.end()){
            return false;
        }
        if(mm[b[i]]==0){
            return false;
        }
        mm[b[i]]--;
    }
    return true;
}
int main(){
    vector<int> b={1,2,3,4,1};
    vector<int> a = {1,2,3,4,1};
    if(isEqual(a,b)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"not equal"<<endl;

    }
    return 0;
}