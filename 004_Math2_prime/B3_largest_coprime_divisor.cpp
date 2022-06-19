/*Largest Coprime Divisor

Problem Description
You are given two positive numbers A and B . You need to find the maximum valued 
integer X such that: 
X divides A i.e. A % X = 0
X and B are co-prime i.e. gcd(X, B) = 1

Problem Constraints
1 <= A,B <= 109

Input Format
First argument is an integer A.
Second argument is an integer B.

Output Format
Return an integer maximum value of X as descibed above.

Example Input
 A=30, B=12
Example Output
 5

Example Explanation
 All divisors of A are (1,2,3,5,6,10,15,30). 
 The maximum value is 5 such that A%5==0 and gcd(5,12)=1
*/
#include<iostream>
using namespace std;

int gcd(int a,int b){
    int temp;
    while(b!=0){
        a=a%b;
        if(a<b){
            a=a^b;
            b=a^b;
            a=a^b;
        }
    }
    cout<<"a="<<a<<" ";
    return a;
}
int main(){
    int a=30;
    int b=12;
    int ans;
    int num1;
    int i;
    for(i=2;i*i<=a;i++){
        cout<<"i="<<i<<" ";
        if(a%i==0){
            num1=a/i;
            if(gcd(num1,b)==1){
                if(num1>ans){
                    ans=num1;
                }
            }
        }
    }
    if(ans==0){
        for(i;i>0;i--){
            if(a%i==0){
                num1=i;
            }
            if(gcd(num1,b)==1){
                ans=num1;
                break;
            }
        }
    }
    cout<<ans<<endl;    
}

