/*Matrix Search
Problem Description
Given a matrix of integers A of size N x M and an integer B. Write an efficient algorithm that 
searches for integar B in matrix A.
 This matrix A has the following properties:
Integers in each row are sorted from left to right.
The first integer of each row is greater than or equal to the last integer of the previous row.
Return 1 if B is present in A, else return 0. NOTE: Rows are numbered from top to bottom and 
columns are numbered from left to right.       

Problem Constraints
1 <= N, M <= 1000
1 <= A[i][j], B <= 106

Input Format
The first argument given is the integer matrix A.
The second argument given is the integer B.

Output Format
Return 1 if B is present in A, else return 0.

Example Input
Input 1:
A = [ 
      [1,   3,  5,  7]
      [10, 11, 16, 20]
      [23, 30, 34, 50]  
    ]
B = 3
Input 2:
A = [   
      [5, 17, 100, 111]
      [119, 120, 127, 131]    
    ]
B = 3
       
Example Output
Output 1:
1
Output 2:
0
       
Example Explanation
Explanation 1:
 3 is present in the matrix at A[0][1] position so return 1.
Explanation 2:
 3 is not present in the matrix so return 0
*/
#include<iostream>
using namespace std;
int A[][4]={{1,3,5,7},{10,11,15,17},{20,23,25,28}};
int m=3;
int n=4;
//another approach: check the last column, if number is larger than the last element, go to next row,
//else search in the present row;
int isPresent(int num){
    int low=0;
    int high=(m*n)-1;
    int mid=0;
    int i=0,j=0;
    while(low<=high){
        cout<<"in ";
        mid=low+(high-low)/2;
        i=mid/n;
        j=mid%n;
        if(A[i][j]==num){
            return 1;
        }       
        else if(A[i][j]<num){
            low=mid+1;
        }
        else if(A[i][j]>num){
            high=mid-1;
        }
    }
    return 0;
}
int main(){
    int num=24;
    int ans=isPresent(num);
    cout<<ans;   
}