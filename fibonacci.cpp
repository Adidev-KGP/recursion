#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1)return n;
    return fib(n-1)+fib(n-2);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    int n;cin>>n;
    cout<<fib(n);
    
    
    //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}
