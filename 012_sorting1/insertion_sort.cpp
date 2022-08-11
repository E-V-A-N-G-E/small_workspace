#include<bits/stdc++.h>
using namespace std;

int * insertionsort(int *arr, int n){
    int i,j,k;
    for(i=1;i<n;i++){
        k=i;
        for(j=i-1;j>=0;j--){
            if(arr[k]<arr[j]){
                arr[k]=arr[k]^arr[j];
                arr[j]=arr[k]^arr[j];
                arr[k]=arr[k]^arr[j];
                k=j;
            }
            else{
                break;
            }
            
            cout<<"i="<<i<<" j="<<j<<endl;
            for(int l=0;l<n;l++){
                cout<<arr[l]<<" ";
            }
            cout<<endl;
        }
    }
    return arr;
}
int main(){
    int arr[]={3,4,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int * ans=insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}