/*Rain Water Trapped
Given n non-negative integers representing an elevation map where the width of each bar is 1,
compute how much water it is able to trap after raining. 

Input Format
The only argument given is integer array A.
Output Format
Return the total water it is able to trap after raining..

For Example
Input 1:
    A = [0,1,0,2,1,0,1,3,2,1,2,1]
Output 1:
    6
Explaination 1:

    In this case, 6 units of rain water (blue section) are being trapped.
*/
#include<iostream>

using namespace std;

template <int N>
int waterTrapped(int (&arr)[N]){
        int n=sizeof(arr)/sizeof(arr[0]);
        
        int pre[n];
        int post[n];

        pre[0]=arr[0];
        post[n-1]=arr[n-1];

        int i=1;

        for(i;i<n;i++){
            pre[i]=max(arr[i],pre[i-1]);
            //cout<<pre[i]<<" ";
        }
        cout<<"\n";
        for(i=n-2;i>=0;i--){
            post[i]=max(arr[i],post[i+1]);
            //cout<<post[i]<<" ";
        }
        int water=0;
        for(i=0;i<n;i++){
            water+=(min(pre[i],post[i])-arr[i]);
        }
        return water;
}

int main(){
        int arr[]={1,7,3,6,2,6};
        int water=waterTrapped(arr);
        cout<<water;
}
