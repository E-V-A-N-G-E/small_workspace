#include<iostream>

using namespace std;

int mat[3][3]={{-1,-2,3},{4,5,6},{7,8,9}};
int n=3;

void prefixSum(){
    int i,j;
    for(i=n-1;i>=0;i--){
        for(j=n-2;j>=0;j--){
            mat[i][j]+=mat[i][j+1];
        }
    }
    for(i=n-1;i>=0;i--){
        for(j=n-2;j>=0;j--){
            mat[j][i]+=mat[j+1][i];
        }
    }
}
int maxSubmatrix(){
    int max=INT32_MIN;
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(mat[i][j]>max){
                max=mat[i][j];
            }
        }
    }
    return max;
}
int main(){
    prefixSum();
    int max=maxSubmatrix();
    cout<<max;
    return 0;
}