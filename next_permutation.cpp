#include<iostream>

using namespace std;

int * nextPermute(int arr[],unsigned int n){
    int midmax;
    int i=n-1;
    for(i=n-1;i>0;i--){
        if(arr[i-1]<arr[i]){
            midmax=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=midmax;
            break;
        }
    }
    
    for(i;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                midmax=arr[j];
                arr[j]=arr[i];
                arr[i]=midmax;
            }
        }
    }
    return arr;
}
int main(){
    int arr[] = {5,4,3,2,1};
    unsigned int n = sizeof(arr)/sizeof(arr[0]);
    int * p=nextPermute(arr, n);
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
}
