#include<iostream>

using namespace std;

int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int n=3;

void prefixSum(){
    int i,j;
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            mat[i][j]+=mat[i][j-1];
        }
    }
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            mat[j][i]+=mat[j-1][i];
        }
    }
}
int submatrixSum(int x1,int y1,int x2,int y2){
    if(x1==0 && y1==0)
        return mat[x2][y2];
    else if(x1==0)
        return mat[x2][y2]-mat[x2][y1-1];
    else if(y1==0)
        return mat[x2][y2]-mat[x1-1][y2];
    return (mat[x2][y2]+mat[x1-1][y1-1]-mat[x2][y1-1]-mat[x1-1][y2]);
}
int main(){
    prefixSum();
    int q;
    cin>>q;
    int sum;
    int w,x,y,z;
    while(q){
        cin>>w>>x>>y>>z;
        sum=submatrixSum(w,x,y,z);
        cout<<sum;
        q--;
    }
}