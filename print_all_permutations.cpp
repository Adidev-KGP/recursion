#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &ds,map<int,int> &mp,vector<int> arr,vector<vector<int>> &ans){
    if(ds.size()==arr.size()){
        ans.push_back(ds);
        return;
    }
    
    for(int i=0;i<arr.size();i++){
        if(mp[arr[i]]==1)continue;
        mp[arr[i]]=1;
        ds.push_back(arr[i]);
        solve(ds,mp,arr,ans);
        mp[arr[i]]--;
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
    }
    
    vector<vector<int>> ans;
    vector<int> ds;
    map<int,int> mp;
    
    solve(ds,mp,arr,ans);
    for(auto it : ans){
        for(auto i : it)cout<<i<<" ";
        cout<<endl;
    }
    
     //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
}
