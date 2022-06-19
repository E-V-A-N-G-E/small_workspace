/*Xor queries
Problem Description
You are given an array A (containing only 0 and 1) as element of N length. Given L and R,
you need to determine value of XOR of all elements from L to R (both inclusive) and number 
of unset bits (0's) in the given range of the array.

Problem Constraints
1<=N,Q<=100000
1<=L<=R<=N

Input Format
First argument contains the array of size N containing 0 and 1 only. 
Second argument contains a 2D array with Q rows and 2 columns, each row represent a 
query with 2 columns representing L and R.

Output Format
Return an 2D array of Q rows and 2 columns i.e the xor value and number of unset bits 
in that range respectively for each query.

Example Input
A=[1,0,0,0,1]
B=[ [2,4],
    [1,5],
    [3,5] ]

Example Output
[[0 3]
[0 3]
[1 2]]

Example Explanation
In the given case the bit sequence is of length 5 and the sequence is 1 0 0 0 1. 
For query 1 the range is (2,4), and the answer is (array[2] xor array[3] xor array[4]) = 0, 
and number of zeroes are 3, so output is 0 3. 
Similarly for other queries.
*/
#include<iostream>
using namespace std;

void xorqueries(int *arr,int s1,int q[][2],int s2,int ans[][2]){
    int prexor[s1];
    int prezero[s1];
    fill_n(prexor,s1,0);
    fill_n(prezero,s1,0);
    prexor[0]=arr[0];
    if(arr[0]==0){
        prezero[0]=1;
    }
    int i;
    int start,end;
    for(i=1;i<s1;i++){
        prexor[i]=prexor[i-1]^arr[i];
        prezero[i]=prezero[i-1];
        if(arr[i]==0){
            prezero[i]=prezero[i-1]+1;
        }
    }
    for(i=0;i<s2;i++){
        start=q[i][0]-1;
        end=q[i][1]-1;
        
        if(start>0){
            ans[i][0]=prexor[end]^prexor[start-1];
            ans[i][1]=prezero[end]-prezero[start-1];
        }
        else{
            ans[i][0]=prexor[end];
            ans[i][1]=prezero[end];
        }
    }
    for(i=0;i<s2;i++){
        for(int j=0;j<2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={1,0,0,0,1};
    int s1=sizeof(arr)/sizeof(arr[0]);
    int q[][2]={{2,4},{1,5},{3,5}};
    int s2=sizeof(q)/sizeof(q[0]);
    int ans[s2][2];
    xorqueries(arr,s1,q,s2,ans);

}