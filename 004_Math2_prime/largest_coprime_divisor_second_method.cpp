#include<iostream>
#include<vector>
using namespace std;

int gcd(int a,int b){
    if(b>a){
        a=a^b;
        b=a^b;
        a=a^b;
    }
    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main(){
    int A=30;
    int B=12;
    int i=2;
    while(gcd(A,B)!=1){
        if(A%i==0){
            A/=i;
        }
        if(A%i!=0)
            i++;
    }
    cout<<A;
}