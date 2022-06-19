#include<iostream>
#include<algorithm>
using namespace std;

void formwave(int * arr,int n){
    int temp;
    for(int i=1;i<n;i+=2){
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }
    int j=0;
    for(int i=0;i<n;i++){
        j=arr[i];
        while(j){
            cout<<"*";
            j--;
        }
        cout<<endl;
    }
}

int main(){
    int n=5;
    int arr[]={1,5,3,8,3};
    sort(arr,arr+n);
    formwave(arr,n);
}