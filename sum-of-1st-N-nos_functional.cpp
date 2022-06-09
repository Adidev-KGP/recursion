#include<bits/stdc++.h>
using namespace std;

int solve(int i){
    if(i<1){
        return 0;
    }
    return i+solve(i-1);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    int n;cin>>n;
    cout<<solve(n);
    
    //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}
