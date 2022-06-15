/*
Victory
Problem Description
Given three integers A, B, C.
Probability of India winning a match against Pakistan is 1/B.
Find the probability P of India winning Cth match in its Ath Match against Pakistan. 
If P = Q/R, return (Q * (R-1)) modulo 109+7.
NOTE: India should win Ath match and that should be Cth win of India in total.
Problem Constraints
1 <= A <= 109
1 <= B <= 102
1 <= C <= 109
1 <= C <= A
0 <= A - C <= 106
Input Format
The first argument given is integer A.
The Second argument given is integer B.
The Third argument given is integer C.
Output Format
Find the probability P of India winning Cth match in its Ath Match against Pakistan.
If P = Q/R, return (Q * (R-1)) modulo 109+7.
Example Input
Input 1:
 A = 2
 B = 2
 C = 2
Input 2:
 A = 3
 B = 3
 C = 2
Example Output
Output 1:
 250000002
Output 2:
 481481485
Example Explanation
Explanation 1:
 P = W W = ( 1/2 )*( 1/2 ) = 1/4 = (1) * (4-1) mod 109+7 = 250000002
Explanation 2:
 P = W L W + L W W = ( 1/3 ) * ( 2/3 ) * ( 1/3 ) + ( 2/3 ) * ( 1/3 ) * ( 1/3 ) = 4/27

*/
#include<iostream>
using namespace std;

double probability(int a,int b,int c){
    double ans=(a-1)*(a-1);//*(((1/b)^c)*((1-(1/b))^(a-c)));
    for(int i=c;i>0;i--){
        ans*=(1/b);
    }
    for(int i=a-c;i>0;i--){
        ans*=(1-(1/b));
    }
    return ans;
}
int main(){
    int A=3;
    int B=3;
    int C=2;
    double ans=probability(A,B,C);
    cout<<ans;
}