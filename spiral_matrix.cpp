#include<iostream>
using namespace std;

void makeMatrix(int A){
    int mat[A][A];
    int cnt=1;
    int start=0;
    int end=A-1;
    int i=0;
    while(cnt<=A*A){
        for(i=start;i<=end;i++){
            mat[start][i]=cnt;   
            cnt++;
        }
        for(i=start+1;i<=end;i++){
            mat[i][end]=cnt; 
            
            cnt++;
        }
        for(i=end-1;i>=start;i--){
            mat[end][i]=cnt; 
            cnt++;
        }
        for(i=end-1;i>start;i--){
            mat[i][start]=cnt; 
            cnt++;
        }
        start++;
        end--;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int A=3;
    makeMatrix(A);
}