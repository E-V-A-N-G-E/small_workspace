/*Allocate Books
Problem Description
Given an array of integers A of size N and an integer B. College library has N books,the ith book has 
A[i] number of pages. You have to allocate books to B number of students so that maximum number of pages 
alloted to a student is minimum.
A book will be allocated to exactly one student.
Each student has to be allocated at least one book.
Allotment should be in contiguous order, for example: A student cannot be allocated book 1 and book 3, 
skipping book 2.
Calculate and return that minimum possible number. 
 NOTE: Return -1 if a valid assignment is not possible. 

Problem Constraints
1 <= N <= 105
1 <= A[i], B <= 105

Input Format
The first argument given is the integer array A.
The second argument given is the integer B.

Output Format
Return that minimum possible number

Example Input
A = [12, 34, 67, 90]
B = 2

Example Output
113

Example Explanation
There are 2 number of students. Books can be distributed in following fashion : 
        1) [12] and [34, 67, 90]
        Max number of pages is allocated to student 2 with 34 + 67 + 90 = 191 pages
        2) [12, 34] and [67, 90]
        Max number of pages is allocated to student 2 with 67 + 90 = 157 pages 
        3) [12, 34, 67] and [90]
        Max number of pages is allocated to student 1 with 12 + 34 + 67 = 113 pages
        Of the 3 cases, Option 3 has the minimum pages = 113.
*/
#include<iostream>

using namespace std;

bool check(int mid,int *presum,int n,int stu){
        int cnt=0;
        int sub=0;
        for(int i=0;i<n;i++){
                if(presum[i]-sub>=mid){
                        cnt++;
                        sub=presum[i];
                }
                if(cnt>=stu){
                        return 1;
                }
        }
        return 0;
}
int findmax(int mid,int *presum,int n){
        int sub=0;
        int ans=0;
        int x;
        for(int i=0;i<n;i++){
                x=presum[i]-sub;
                if(x>=mid){
                        sub=presum[i];
                        if(x>ans){
                                ans=x;
                        }
                }       
        }
        return ans;
}
int allocateBooks(int *arr, int n,int stu){
        int mid;
        int presum[n];
        presum[0]=arr[0];
        for(int i=1;i<n;i++){
                presum[i]=arr[i]+presum[i-1];
        }
        int low=0;
        int high=presum[n-1];
        
        while(low<=high){
                mid=low+(high-low)/2;
                if(check(mid,presum,n,stu)){
                        low=mid+1;
                }
                else{
                        high=mid-1;
                }
        }
        mid=findmax(mid,presum,n);
        return mid;
}

int main(){
        int arr[]={12,34,67,90};
        int n=sizeof(arr)/sizeof(arr[0]);
        int stu=2;
        int ans=allocateBooks(arr,n,stu);
        cout<<ans;
        return 0;
}