#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = {1,2,3,4,5,6};
    int target = 11;
    unordered_map<int,int> mm;
    for(int i=0; i<a.size(); i++){
        mm[a[i]] = i;
    }
    for(int i=0; i<a.size(); i++){
        int diff = target - a[i];
        if(mm.find(diff)!=mm.end()){
            cout<<mm[a[i]]<<mm[diff]<<endl;
            return 0;
        }
    }
    return 0;
}