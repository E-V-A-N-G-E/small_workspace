#include<iostream>
//2:00pm
using namespace std;

int numChunks(int *arr,int n){
    int num=0;
    int max;
    int i=0;
    while(i<n){
        if(i== arr[i]){
            num++;
            i=i+1;
        }
        else{
            max=arr[i];
            for(i;i<=max;i++){
                if(arr[i]>max)
                    max=arr[i];
            }
            num++;          
        }
    }
    return num;
}

int main(){
    int n=10;
    int arr[10]={9,1,2,3,4,0,5,6,7,8};
    int num=numChunks(arr,n);
    cout<<num;
}