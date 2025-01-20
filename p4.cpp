//program to find the maximum difference between the repetated element
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int findMax(vector<int> &a)
{
    int n = a.size();
    unordered_map<int,int> mm;
    int res =0;
    for(int i=0; i<n; i++){
        if(mm.find(a[i])==mm.end()){
            mm[a[i]]= i;
        }
        else{
            res = max(res, i-mm[a[i]]);
        }
    }
    return res;
}
int main(){
    vector<int> a={1, 2, 3, 6, 5, 4};
    cout<<findMax(a)<<endl;
    return 0;
}