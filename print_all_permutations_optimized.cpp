#include<bits/stdc++.h>
using namespace std;

void solve(int ind,vector<int> &arr,vector<vector<int>> &ans){
    if(ind==arr.size()){
        ans.push_back(arr);
        return;
    }
    
    for(int i=ind;i<arr.size();i++){
        swap(arr[ind],arr[i]);
        solve(ind+1,arr,ans);
        swap(arr[ind],arr[i]);
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
    solve(0,arr,ans);
    for(auto it : ans){
        for(auto i : it)cout<<i<<" ";
        cout<<endl;
    }
      //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
}
