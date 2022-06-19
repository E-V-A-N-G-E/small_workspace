/*Maximum height of the staircase
Given an integer A representing the square blocks. The height of each square block is 1. The task is to create
 a staircase of max height using these blocks. The first stair would require only one block, the second stair 
 would require two blocks and so on. Find and return the maximum height of the staircase. 
Input Format
The only argument given is integer A.
Output Format
Return the maximum height of the staircase using these blocks.
Constraints
0 <= A <= 10^9
For Example
Input 1:
    A = 10
Output 1:
    4

Input 2:
    A = 20
Output 2:
    5
*/
#include<iostream>
using namespace std;
int numOfSteps(int a){
    int low=0;
    int high=a;
    int mid;
    int sum;
    while(low<=high){
        mid=low+(high-low)/2;
        sum=mid*(mid+1)/2;
        if(sum==a)
            return mid;
        else if(a<sum){
            high=mid-1;
        }
        else
            low=mid+1;
    }
}
int main(){
    int a=20;
    int ans=numOfSteps(a);
    cout<<ans;
}