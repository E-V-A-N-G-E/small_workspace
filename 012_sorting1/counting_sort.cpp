#include<iostream>

using namespace std;

void countingSort(int *arr,int n,int min,int max,int *ans){
    int range=max-min+1;
    int freq[range];
    int prefix[range];
    fill_n(freq,range,0);
    int i;
    for(i=0;i<n;i++){
        freq[arr[i]-min]++;
    }
    prefix[0]=freq[0];
    for(i=1;i<range;i++){
        prefix[i]=prefix[i-1]+freq[i];
    }
    for(i=0;i<n;i++){
        ans[prefix[arr[i]-min]-1]=arr[i];
        prefix[arr[i]-min]--;
    }
}
int main(){
    int arr[]={3,4,1,2,3,3};
    int min=1;
    int max=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    countingSort(arr, n,min,max,ans);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}