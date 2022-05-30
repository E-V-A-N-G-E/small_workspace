//find the next greater permutation of the array, 
//return the ascending order of the array if there is no greater permutation possible

#include<iostream>

using namespace std;
//search---->O(n)
//search---->O(n)
//swap--------->O(1)
//reverse------>O(n){sort--------->can be done in O(nlogn)/O(n*n)}
//t.c(if reversed-------->O(n)         if sorted---->nlogn/O(n*n)
int * nextPermute(int arr[],unsigned int n){
    int indexA,indexB;
    int temp;
    int i=n-1;
    for(i=n-1;i>0;i--){
        if(arr[i-1]<arr[i]){
            indexA=i-1;
            break;
        }
    }
    int max=0;
    bool flag=true;
    for(i=indexA+1;i<n;i++){
        if(arr[i]>arr[indexA]){
            if(flag){
                indexB=i;
                max=arr[i];
                flag=false;
            }
            if(arr[i]<=max){
                max=arr[i];
                indexB=i;
            }
        }
    }
    temp=arr[indexA];
    arr[indexA]=arr[indexB];
    arr[indexB]=temp;
    /*for(i=indexA+1;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }*/
    int j;
    for(i=indexA+1,j=n-1;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return arr;
}
int main(){
    int arr[] = {1,1,2,6,5,3};
    unsigned int n = sizeof(arr)/sizeof(arr[0]);
    int * p=nextPermute(arr, n);
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
}
