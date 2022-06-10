#include<bits/stdc++.h>
using namespace std;

void printS(int i,vector<int> &ds,int s,int sum,int arr[],int n){
    if(i == n){
        if(s==sum){
            for(auto i : ds)cout<<i<<" ";
            cout<<endl;
        }return;
    }
    
    ds.push_back(arr[i]);
    s+=arr[i];
    printS(i+1,ds,s,sum,arr,n);//pick
    
    ds.pop_back();
    s-=arr[i];
    //not pick
    
    printS(i+1,ds,s,sum,arr,n);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    int n;cin>>n;
    int sum;cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int> ds;
    printS(0,ds,0,sum,arr,n);
    
    //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}
