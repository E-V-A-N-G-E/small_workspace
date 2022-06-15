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
    gcd(b,a%b);
}
int delNum(int *arr,int n){
    int pre[n];
    int post[n];
    
    int i;
    int num;
    int g,g1;
    int prevg=arr[0];
    for(i=1;i<n;i++){
        g=gcd(arr[i],prevg);
        prevg=g;
    }
    num=g;
    pre[0]=arr[0];
    post[n-1]=arr[n-1];
    for(i=1;i<n;i++){
        pre[i]=gcd(arr[i],arr[i-1]);
    }
    for(i=n-2;i>=0;i--){
        post[i]=gcd(arr[i],arr[i+1]);
    }
    for(i=0;i<n;i++){
        if(i==0){
            g1=post[1];
        }
        if(i==n-1){
            g1=pre[i-1];
        }
        else
            g1=gcd(pre[i-1],post[i+1]);
        if(g1>g && g1>num){
            num=g1;
        }
    }
    return num;
}

int main(){
    int arr[]={60,80,120};
    int n=sizeof(arr)/sizeof(arr[0]);
    int gcd=delNum(arr,n);
    cout<<gcd;
}