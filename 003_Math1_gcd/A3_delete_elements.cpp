#include<iostream>
using namespace std;

int gcd(int a,int b){
    int temp;
    if(a<b){
        temp=a;
        a=b; 
        b=temp;
    }
    if(b==0){
        return a;
    }
    gcd(a%b,b);
}

int remNum(int *arr,int n){
    int g;
    int cnt=0;
    int l=0;
    for(int i=1;i<n;i++){
        g=gcd(arr[l],arr[i]);
        if(g!=1){
            cnt++;
            if(arr[l]>arr[i]){
                l=i;
            }
        }
    }
    return cnt;
}

int main(){
    int arr[5]={2,4,7,8,9};
    int n=5;
    int cnt=remNum(arr,n);
    cout<<cnt;   
    return 0;
}