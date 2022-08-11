/*Find the count of right angled triangle such that the base and perpendicular are parallel to either X or Y-axis? 

Given two arrays of integers A and B of size N each, where each pair (A[i], B[i]) for 0 <= i < N
represents a unique point (x, y) in 2D Cartesian plane.

Find and return the number of unordered triplets (i, j, k) such that (A[i], B[i]), (A[j], B[j]) and (A[k], B[k])
form a right angled triangle with the triangle having one side parallel to the x-axis and one side parallel to the y-axis.

Note: The answer may be large so return the answer modulo (10^9 + 7).

Here is the link of the problem on InterviewBit: https://www.interviewbit.com/problems/count-right-triangles
*/
#include<iostream>
#include<unordered_map>
using namespace std;

int noOfTriangles(int A[],int B[],int n){
    unordered_map<int,int>xmap;
    unordered_map<int,int>ymap;
    int ans=0;
    for(int i=0;i<n;i++){
        if(xmap.find(A[i])!=xmap.end()){
            xmap[A[i]]++;
        }
        else{
            xmap[A[i]]=1;
        }
        if(ymap.find(B[i])!=ymap.end()){
            ymap[B[i]]++;
        }
        else{
            ymap[B[i]]=1;
        }
    }
    for(int i=0;i<n;i++){
        ans=ans+((xmap[A[i]]-1)*(ymap[B[i]]-1));
    }
    return ans;
}
int main(){
    int A[]={1,2,1,1,1,4,5};
    int B[]={1,3,4,-3,-5,1,1};
    int n=sizeof(A)/sizeof(int);
    int ans=noOfTriangles(A,B,n);
    cout<<ans;
}