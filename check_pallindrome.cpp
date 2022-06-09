#include<bits/stdc++.h>
using namespace std;

bool solve(string s,int l,int r){
    if(l>=r)return true;
    if(s[l]==s[r])return solve(s,l+1,r-1);
    else return false;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    string s;
    cin>>s;
    int n=s.length();
    cout<<solve(s,0,n-1);
    
    
    //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}
