//input: numbers A,B,C
//output: number of numbers <= A, which are divisible by B and C

#include<iostream>
using namespace std;


class numberComp{
    public:
    int gcd(int a,int b);
    int numb(int a, int b, int c);
    private:
    int temp;
};
int numberComp::gcd(int a,int b){
    if(a<b){
        temp=a;
        a=b; 
        b=temp;
    }
    if(a==0 && b==0)
        return -1;
    if(b==0){
        return a;
    }
    
    gcd(a%b,b);
}
int numberComp::numb(int a,int b,int c){
    int gcd=this->gcd(b,c);
    int lcm=(b*c)/gcd;
    return a/lcm;
}
int main(){
    int a=30;
    int b=2;
    int c=3;
    numberComp obj;
    int cnt=obj.numb(a,b,c);

    cout<<cnt;
}