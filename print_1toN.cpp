#include<bits/stdc++.h>
using namespace std;

void solve(int i,int n){
    if(i>n)return;
    cout<<i;
    solve(i+1,n);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    int n;cin>>n;
    solve(1,n);
    
    //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}
