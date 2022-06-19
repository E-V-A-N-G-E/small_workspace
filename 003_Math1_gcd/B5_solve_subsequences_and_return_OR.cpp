#include<iostream>

using namespace std;

class sol{
    public:
        int gcd(int a,int b);
        int solve(int *arr,int n);
        int ans;
};
int sol::gcd(int a,int b){
    if(a<b){
        a=a^b; 
        b=a^b; 
        a=a^b; 
    }
    if(b==0 && a==0){
        return 0;
    }
    if(b==0){
        return a;
    }
    gcd(b,a%b);
}
int sol::solve(int *arr,int n){
    int g=arr[0];
    for(int i=1;i<n;i++){
        g=gcd(g,arr[i]);
    }
    if(g==1){
        return 1;
    }
    return 0;
}

int main(){
    sol obj;
    int arr[]={2,4,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=obj.solve(arr,n);
    cout<<ans<<" ";
}