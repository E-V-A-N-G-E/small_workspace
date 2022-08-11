#include<iostream>

using namespace std;
int main(){
    int arr[]={1,5,7,8};
    int k=12;
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=1;
    int sum=0;
    sum=arr[i]+arr[j];
    while(j<n && i<j){
        if(sum==k){
            cout<<i<<" "<<j<<endl;
            break;
        }
        else if(sum>k){
            sum-=arr[i];
            i++;
        }
        else if(sum<k){
            j++;
            sum+=arr[j];
        }
    }
} 