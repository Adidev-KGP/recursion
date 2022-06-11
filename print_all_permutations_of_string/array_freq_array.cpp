#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &ds,int freq[],vector<int> arr,vector<vector<int>> &ans){
    if(ds.size()==arr.size()){
        ans.push_back(ds);
        return;
    }
    
    for(int i=0;i<arr.size();i++){
        if(!freq[i]){
        ds.push_back(arr[i]);
        freq[i]=1;
        solve(ds,freq,arr,ans);
        freq[i]=0;
        ds.pop_back();
        }
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
    int freq[n];
    memset(freq,0,sizeof(freq));
    
    solve(ds,freq,arr,ans);
    for(auto it : ans){
        for(auto i : it)cout<<i<<" ";
        cout<<endl;
    }
    
     //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
}
