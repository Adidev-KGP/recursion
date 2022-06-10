#include<bits/stdc++.h>
using namespace std;

void solve(int ind ,int target ,vector<int> &ds,vector<vector<int>> &ans , vector<int> &arr){
        if(target == 0){
            ans.push_back(ds);
            return;
        }
    
    for(int i=ind;i<arr.size();i++){
        if(i>ind && arr[i]==arr[i-1])continue;
        if(arr[i]>target)break;
        ds.push_back(arr[i]);
        solve(i+1,target-arr[i],ds,ans,arr);
        ds.pop_back();
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    int n;cin>>n;
    int sum;cin>>sum;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.push_back(x);
    }sort(arr.begin(),arr.end());
    
    vector<vector<int>> ans;
    vector<int>ds;
    solve(0,sum,ds,ans,arr);
    for(auto it : ans){
        for(auto i : it)cout<<i<<" ";
        cout<<endl;
    }
    
    
    //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}
