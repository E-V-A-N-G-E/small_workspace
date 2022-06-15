/*Grid Unique Paths
Problem Description
A robot is located at the top-left corner of an A x B grid (marked 'Start' in the diagram below).  
The robot can only move either down or right at any point in time. 
The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in 
the diagram below). How many possible unique paths are there? 

Problem Constraints
A and B will be such that the resulting answer fits in a 32 bit signed integer.

Input Format
First argument of input will be single integer A.
Second argument of input will be single integer B.

Output Format
Return a single integer denoting the number of unique paths.

Example Input
 A = 2, B = 2

Example Output
 2

Example Explanation
 2 possible routes : (0, 0) -> (0, 1) -> (1, 1) 
              OR  : (0, 0) -> (1, 0) -> (1, 1)
*/
#include <iostream>
using namespace std;

int ways(int n,int m){
    int ans=1;
    int steps=m+n-2;
    int l=min(m-1,n-1);
    int i;
    for(i=0;i<l;i++){
        ans=ans*(steps-i)/(i+1);  
    }
    return ans;
}
int main(){
    int n=3;
    int m=3;
    int way=ways(n,m);
    cout<<way;
}
