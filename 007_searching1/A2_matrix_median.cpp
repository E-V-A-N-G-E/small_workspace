/*Matrix Median
Given a matrix of integers A of size N x M in which each row is sorted. Find an return the overall
 median of the matrix A. Note: No extra memory is allowed. Note: Rows are numbered from top to 
 bottom and columns are numbered from left to right. 
Input Format
The first and only argument given is the integer matrix A.
Output Format
Return the overall median of the matrix A.
Constraints
1 <= N, M <= 10^5
1 <= N*M  <= 10^6
1 <= A[i] <= 10^9
N*M is odd
For Example
Input 1:
    A = [   [1, 3, 5],
            [2, 6, 9],
            [3, 6, 9]   ]
Output 1:
    5
Explanation 1:
    A = [1, 2, 3, 3, 5, 6, 6, 9, 9]
    Median is 5. So, we return 5.

Input 2:
    A = [   [5, 17, 100]    ]
Output 2:
    17
*/
#include<iostream>
#include<cmath>
using namespace std;
int mat[][3]={{1,3,5},{2,6,9},{3,6,9}};
int m=3;
int n=3;

int check(int mid,int i,int j){
    cout<<"in";
    int cnt=0;
    cnt=(j+1)*(j+1);
    for(int k=i+1;k<m;i++){
        for(int l=0;l<j;j++){
            if(mat[k][l]<mat[i][j]){
                cnt++;
            }
        }
    }
    for(int k=0;k<i;i++){
        for(int l=j+1;l<n;j++){
            if(mat[k][l]<mat[i][j]){
                cnt++;
            }
        }
    }
    cout<<"cnt"<<cnt<<" ";
    if(cnt==4){
        return 1;
    }
    return 0;
}
int median(){
    int low=0;
    int high=8;
    int mid;
    int i,j;
    while(low<=high){
        mid=low+(high-low)/2;
        i=mid/n;
        j=mid%n;
        if(check(mid,i,j)){
            return mat[i][j];
        }

    }
}
int main(){
    int ans=median();
    cout<<ans;
}
