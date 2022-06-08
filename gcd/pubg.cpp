#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;


int minHealth(vector<int>arr,int n){
    sort(arr.begin(),arr.end());
    while(arr[n-2]!=0){
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i]-arr[i-1];
            if(arr[i]<0){
                arr[i]=0;
            }
        }
        sort(arr.begin(),arr.end());
    }
    return arr[n-1];
}
int main(){
    vector<int>arr={6,4};
    int n=arr.size();
    int ans=minHealth(arr,n);
    cout<<ans;
}