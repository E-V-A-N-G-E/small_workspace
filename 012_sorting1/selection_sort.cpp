#include<iostream>
using namespace std;

int * selectionsort(int *arr,int n){
    int min;
    int minindex;
    int temp;
    for(int i=0;i<n;i++){
        min=arr[i];
        minindex=i;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minindex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
    return arr;
}
int main(){
    int arr[]={3,4,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int * ans=selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}