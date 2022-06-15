/*Single Number II
Problem Description
Given an array of integers, every element appears thrice except for one which occurs once.
Find that element which does not appear thrice.
Note: Your algorithm should have a linear runtime complexity.
Could you implement it without using extra memory?

Problem Constraints
2 <= A <= 5 000 000
0 <= A <= INT_MAX
        
Input Format
First and only argument of input contains an integer array A.

Output Format
Return a single integer.

Example Input
Input 1:
A = [1, 2, 4, 3, 3, 2, 2, 3, 1, 1]
Input 2:
A = [0, 0, 0, 1]
      
Example Output
Output 1:
4
Output 2:
1

Example Explanation
Explanation:
4 occurs exactly once in Input 1.
1 occurs exactly once in Input 2.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int ans=0;
    int arr[]={1, 2, 4, 3, 3, 2, 2, 3, 1, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<32;i++){
        for(int j=0;j<n;j++){
            sum+=(arr[j]&(1<<i));
        }
        if(sum%3>0){
            ans+=(1*(pow(2,i)));
        }
        sum=0;
    }
    cout<<ans;
}