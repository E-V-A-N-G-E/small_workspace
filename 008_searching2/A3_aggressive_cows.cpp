/*Aggressive cows
Problem Description
Farmer John has built a new long barn, with N stalls. Given an array of integers A of size N where each 
element of the array represents the location of the stall, and an integer B which represent the number of 
cows. His cows don't like this barn layout and become aggressive towards each other once put into a stall. 
To prevent the cows from hurting each other, John wants to assign the cows to the stalls, such that the 
minimum distance between any two of them is as large as possible. What is the largest minimum distance?  
Problem Constraints
2 <= N <= 100000
0 <= A[i] <= 109
2 <= B <= N
Input Format
The first argument given is the integer array A.
The second argument given is the integer B.
Output Format
Return the largest minimum distance possible among the cows.
Example Input
 A = [1, 2, 3, 4, 5]
 B = 3
Example Output
 2
Example Explanation
 John can assign the stalls at location 1,3 and 5 to the 3 cows respectively.
 So the minimum distance will be 2
*/
#include<iostream>
using namespace std;

int check(int n,int *arr,int s,int c){
    int cnt=1;
    int sub=-arr[0];
    for(int i=1;i<s;i++){
        if((arr[i]+sub)>=n){
            cnt++;
            sub=-arr[i];
        }
        if(cnt>=c){
            return 1;
        }
    }
    return 0;
}
int findDistance(int *arr,int s,int c){
    int i;
    int low=arr[0];
    int high=arr[s-1];
    //answerspace--->0 to arr[s-1]/c;
    //monotonicity------>
    int dist[s];
    dist[0]=arr[0];
    for(i=1;i<s-1;i++){
        dist[i]=arr[i]-arr[i-1];
    }
    int mid;
    int ans=0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(check(mid,arr,s,c)==1){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[]={1,5,10,15,20};
    int s=5;
    int c=3;
    int distance=findDistance(arr,s,c);
    cout<<distance;
}

