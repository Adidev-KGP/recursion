#include<bits/stdc++.h>
using namespace std;

void solve(int ind,int sum,vector<int> &arr,vector<int> &ds){
    if(ind<0){
        ds.push_back(sum);
        return;
    }
    //take
    solve(ind-1,sum-arr[ind],arr,ds);
    
    //not take
    solve(ind-1,sum,arr,ds);
    
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    
    int n;cin>>n;
    vector<int> arr;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        sum+=x;
        arr.push_back(x);
    }
    solve(arr.size()-1,sum,arr);
    sort(ds.begin(),ds.end());
    for(auto it : ds) cout<<it<<" ";
     //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}


