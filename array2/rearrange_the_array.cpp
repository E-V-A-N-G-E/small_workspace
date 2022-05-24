/*Rearrange the array
Given an array of integers A of size N that is a permutation of [0, 1, 2, ..., (N-1)]. Rearrange the array such 
that A[i] = j is changed to A[j] = i for all i and j form 0 to N-1. Note: Try solving this with O(1) extra space. 
Input Format
The only argument given is the integer array A.
Output Format
Return the rearranged array A.
Constraints
1 <= N <= 100000
0 <= A[i] < N
For Example
Input 1:
    A = [1, 2, 3, 4, 0]
Output 1:
    [4, 0, 1, 2, 3]

Input 2:
    A = [2, 0, 1, 3]
Output 2:
    [1, 2, 0, 3]*/
#include<iostream>

using namespace std;

int * rearrange(int *arr,int n){
    int i=0;
    for(i=0;i<n;i++){
        arr[i]+=arr[i]+(arr[i]%n)*n;
    }
    for(i=0;i<n;i++){
        arr[i]/=n;
    }
    return arr;
}
int main(){
    int arr[4]={2,0,1,3};
    int n=4;
    int * p=rearrange(arr,n);
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
}