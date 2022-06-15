#include<iostream>

using namespace std;

class repeatedSub{
    public:
        int subtraction(int a,int b);
};
int repeatedSub::subtraction(int a,int b){
    if(a<b){
        a=a^b; 
        b=a^b; 
        a=a^b; 
    }
    else if(b==a){
        return a+b;
    }
    if(b==0){
        return a*2;
    }
    subtraction(b,a%b);
}
int main(){
    repeatedSub obj;
    int ans=obj.subtraction(5,11);
    cout<<ans;
}