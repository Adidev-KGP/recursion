#include<bits/stdc++.h>
using namespace std;

void solve(int ind,int sum,vector<int> &arr){
    if(ind<0){
        cout<<sum<<" ";
        return;
    }
    //take
    solve(ind-1,sum-arr[ind],arr);
    
    //not take
    solve(ind-1,sum,arr);
    
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
    sort(arr.begin(),arr.end());
    solve(arr.size()-1,sum,arr);
     //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}


