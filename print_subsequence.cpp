#include<bits/stdc++.h>
using namespace std;

void printF(int ind, vector<int> &ds, int arr[], int n){
    if(ind == n){
        for(auto it : ds)cout<<it<<" ";
        cout<<endl;
        return;
    }
    
    //take or pick the particular index into the subsequence
    
    ds.push_back(arr[ind]);
    printF(ind+1,ds,arr,n);
    ds.pop_back();
    
    //not pick , this element is not added to the subsequence
    
    printF(ind+1,ds,arr,n);
    
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    int arr[]={3,1,2};
    int n=3;
    vector<int> ds;
    printF(0,ds,arr,n);
    
    
    //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}
