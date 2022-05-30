/*Return maximum value of f(i, j) in an array, f(i, j) is defined 
as |A[i] - A[j]| + |i - j|*/

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