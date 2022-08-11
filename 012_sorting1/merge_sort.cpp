#include<iostream>
using namespace std;

int arr[]={3,4,1,2,5,7,6};
int n=sizeof(arr)/sizeof(arr[0]);
void mergesort(int l,int mid,int r){
    int i=l;
    int j=mid+1;
    int k=0;
    int temp[r-l];
    
    while(i<=mid && j<=r){
        if(arr[j]<=arr[i]){
            temp[k]=arr[j];
            k++;
            j++;
        }
        else{
            temp[k]=arr[i];
            k++;
            i++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=r){
        temp[k]=arr[j];
        j++;
        k++;
    }
    k=0;
    for(i=l;i<r;i++){
        arr[i]=temp[k];
        k++;
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}
void merge(int l,int r){
    int mid=(l+r)/2;
    if(l<r){
        merge(l,mid);
        merge(mid+1,r);
        mergesort(l,mid,r);
    }
}

int main(){

    merge(0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}