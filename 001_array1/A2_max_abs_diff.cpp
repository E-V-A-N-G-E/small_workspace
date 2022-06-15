/*Maximum Absolute Difference
You are given an array of N integers, A1, A2 ,..., AN. 
Return maximum value of f(i, j) for all 1 ≤ i, j ≤ N. f(i, j) is defined 
as |A[i] - A[j]| + |i - j|, where |x| denotes absolute value of x. For example,

A=[1, 3, -1]

f(1, 1) = f(2, 2) = f(3, 3) = 0
f(1, 2) = f(2, 1) = |1 - 3| + |1 - 2| = 3
f(1, 3) = f(3, 1) = |1 - (-1)| + |1 - 3| = 4
f(2, 3) = f(3, 2) = |3 - (-1)| + |2 - 3| = 5

So, we return 5.*/

#include<iostream>
using namespace std;

int absoluteDiff(int *arr,int n){
    int maxSum=INT32_MIN;
    int minSum=INT32_MAX;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=arr[i]+i;
        if(sum>maxSum){
            maxSum=sum;
        }
        if(sum<minSum){
            minSum=sum;
        }
    }
    return maxSum-minSum;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]); 
    int maxi=absoluteDiff(arr,n);
    cout<<maxi;
}