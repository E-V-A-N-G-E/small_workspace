#include<bits/stdc++.h>

using namespace std;
vector<vector<char>>res;

void solveNQueens(int n,int q,int col,int row){
    if(q==n){
        return;
    }
    vector<vector<int>>temp;
    
    int pos=(col*n)+row;
    pos++;
    temp[row].push_back('q');
    solveNQueens(n,q+1,pos/n,pos%n);
    temp[row].pop_back();
    temp[row].push_back('.');
    solveNQueens(n,q,pos/n,pos%n);

}
int main(){
    int n=4;
    for(int i=0;i<4;i++){
        
    }
    solveNQueens(n,0,0,0);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[0].size();j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }
}