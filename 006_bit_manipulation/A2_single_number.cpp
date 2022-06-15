/*Single Number
Problem Description
Given an array of integers, every element appears twice except for one. Find that single one.

Note: Your algorithm should have a linear runtime complexity. Could you implement it without 
    using extra memory?

Problem Constraints
2 <= N <= 2000000
0 <= A[i] <= INT_MAX
    
Input Format
First and only argument of input contains an integer array A.

Output Format
Return a single integer denoting the single element.

Example Input
Input 1:
A = [1, 2, 2, 3, 1]
Input 2:
A = [1, 2, 2]
        
Example Output
Output 1:
3
Output 2:
1

Example Explanation
3 occurs only once. So the answer is 3.
*/
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,2,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    cout<<ans;
}