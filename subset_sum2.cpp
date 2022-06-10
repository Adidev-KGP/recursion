#include<bits/stdc++.h>
using namespace std;

void solve(int ind,vector<int> &arr,vector<int> &ds, vector<vector<int>> &ans){
    ans.push_back(ds);
    
    for(int i=ind;i<arr.size();i++){
        if(i!=ind && arr[i]==arr[i-1])continue;
        
        ds.push_back(arr[i]);
        solve(i+1,arr,ds,ans);
        ds.pop_back();
    }
    
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    
    int n;cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.push_back(x);
    }sort(arr.begin(),arr.end());
    
    vector<vector<int>>ans;
    vector<int> ds;
    solve(0,arr,ds,ans);
    for(auto it : ans){
        for(auto jt : it)cout<<jt<<" ";
        cout<<endl;
    }
    
     //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}


