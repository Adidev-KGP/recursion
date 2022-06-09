#include<bits/stdc++.h>
using namespace std;

void solve(int l,int r,int arr[]){
    if(l>=r)return;
    swap(arr[l],arr[r]);
    solve(l+1,r-1,arr);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    solve(0,n-1,arr);
    for(int i=0;i<n;i++)cout<<arr[i];
    
    
    //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}
