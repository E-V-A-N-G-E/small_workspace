#include<iostream>
#include<vector>
using namespace std;

int gcd(int a,int b){
    if(a<b){
        a=a^b; 
        b=a^b; 
        a=a^b; 
    }
    if(a==0 && b==0){
        return 0;
    }
    if(b==0){
        return a;
    }
    gcd(a%b,b);
}

int minHealth(vector<int>v,int n){
    int g;
    int prevg=v[0];
    for(int i=1;i<n;i++){
        g=gcd(prevg,v[i]);
        prevg=g;
    }
    return g;
}
int main(){
    vector<int>v={6,4};
    int n=v.size();
    int ans=minHealth(v,n);
    cout<<ans;
}