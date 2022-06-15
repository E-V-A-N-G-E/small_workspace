/*Count of divisors for multiple queries

Problem Description
Given an array of integers A, find and return the count of divisors of each element 
of the array. Note: Order of the resultant array should be same as the input array. 

Problem Constraints
1 <= length of the array <= 100000
1 <= A[i] <= 10^6

Input Format
The only argument given is the integer array A.

Output Format
Return the count of divisors of each element of the array in the form of an array.

Example Input
 A = [2, 3, 4, 5]

Example Output
 [2, 2, 3, 2]

Example Explanation
 The number of divisors of 2 : [1,2], 3 : [1,3], 4 : [1,2,4], 5 : [1,5]
 So the count will be [2,2,3,2].
*/
#include<iostream>
#include<algorithm>
using namespace std;

int * countDiv(int *arr,int n,int *arr1){
    fill_n(arr1,n,2);
    int i,j;
     
    for(i=0;i<n;i++){
        if(arr[i]==1 || arr[i]==0){
            arr1[i]=1;
        }
        else if(arr[i]>3){
            for(j=2;j*j<arr[i];j++){
                if(arr[i]%j==0){
                    arr1[i]+=2;
                }
            }
            if(j*j==arr[i])
                arr1[i]++;
        }
    }
    return arr1;
}
int main(){
    int arr[]={2,3,4,5,6,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr1[n];
    int * p=countDiv(arr, n,arr1);
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }   
}