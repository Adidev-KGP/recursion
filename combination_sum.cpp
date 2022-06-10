#include<bits/stdc++.h>
using namespace std;

void solve(int ind ,int target ,vector<int> &ds,vector<vector<int>> &ans , vector<int> &arr){
    if(ind==arr.size()){
        if(target == 0){
            ans.push_back(ds);
        }return;
    }
    
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        solve(ind,target-arr[ind],ds,ans,arr);
        ds.pop_back();
    }
    
    solve(ind+1,target,ds,ans,arr);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    int n;cin>>n;
    int sum;cin>>sum;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.push_back(x);
    }
    vector<vector<int>> ans;
    vector<int>ds;
    solve(0,sum,ds,ans,arr);
    for(auto it : ans){
        for(auto i : it)cout<<i<<" ";
        cout<<endl;
    }
    
    
    //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}
