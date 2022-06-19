/*Single Element in a Sorted Array
Given a sorted array of integers A where every element appears twice except for one element 
which appears once, find and return this single element that appears only once. 
Input Format
The only argument given is the integer array A.
Output Format
Return the single element that appears only once.
Constraints
1 <= length of the array <= 100000
1 <= A[i] <= 10^9 
For Example
Input 1:
    A = [1, 1, 2, 2, 3]
Output 1:
    3

Input 2:
    A = [5, 11, 11, 100, 100]
Output 2:
    5
*/
#include<iostream>
using namespace std;

int single(int *arr,int s){
    int low=0;
    int high=s-1;
    int mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        else if(mid%2==0){
            if(arr[mid+1]==arr[mid]){
                low=mid+1;
            }
            else
                high=mid-1;
        }
        else{
            if(arr[mid-1]==arr[mid]){
                low=mid+1;
            }
            else
                high=mid-1;
        }
    }   
}
int main(){
    int arr[]={1,1,2,2,3,4,4};
    int s=sizeof(arr)/sizeof(arr[0]);
    int ans=single(arr,s);
    cout<<ans;
}