#include<bits/stdc++.h>
using namespace std;

bool solve(string s,int n,int i){
    if(i>=n/2)return true;
    if(s[i]!=s[n-i-1])return false;
    
    return solve(s,n,i+1);//this line looks good
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    string s;
    cin>>s;
    int n=s.length();/this line too
    cout<<solve(s,n,0);
    
    
    //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}
