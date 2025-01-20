//Duplicate within K Distance in an Array
#include<bits/stdc++.h>
using namespace std;
bool doesExist(vector<int>&a, int k){
    int n= a.size();
    unordered_map<int,int> mm;
    for(int i=0; i<n; i++){
        if(mm.find(a[i])==mm.end()) mm[a[i]] =i;
        else{
            if((i-mm[a[i]])<=k){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector <int> a = {1, 2, 3, 4, 4};
    int k=3;
    if(doesExist(a,k)) cout<<"YESS"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}