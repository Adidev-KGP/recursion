#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row,int col, vector<string> board,int n){
    int duprow=row;
    int dupcol=col;
    
    while(row>=0 && col>=0){
        if(board[row][col]=='Q')return false;
        row--;
        col--;
    }
    
    row=duprow;
    col=dupcol;
    
    while(col>=0){
        if(board[row][col]=='Q')return false;
        col--;
    }
    row=duprow;
    col=dupcol;
    
    while(col>=0 && row<n){
        if(board[row][col]=='Q')return false;
        row++;
        col--;
    }
    return true;
}

void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n){
    if(col==n){
        ans.push_back(board);
        return;
    }
    
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            solve(col+1,board,ans,n);
            board[row][col]='.';
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    int n;cin>>n;
    
    vector<vector<string>>ans;
    vector<string> board;

    string s(n,'.');
    
    
    for(int i=0;i<n;i++){
        board[i]=s;
    }
    solve(0,board,ans,n);
    for(auto it: ans){
        for(auto y :it){
            for(auto z : y)cout<<z;
            cout<<endl;
        }cout<<endl;
    }
    
    
    
    //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
}
