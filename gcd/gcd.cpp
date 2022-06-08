#include<iostream>

using namespace std;

int gcd(int a,int b){
    int temp;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a==0)
        return b; 
    gcd(a,b%a);
}
int main(){
    int a=250;
    int b=200;
    int c=gcd(a,b);
    cout<<c;
}