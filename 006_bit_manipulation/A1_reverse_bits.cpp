/*Reverse Bits
Problem Description
Reverse the bits of an 32 bit unsigned integer A.

Problem Constraints
0 <= A <= 2^32

Example Input
Input 1:
0
Input 2:
3

Example Output
Output 1:
0
Output 2:
3221225472

Example Explanation
Explanation 1:
        00000000000000000000000000000000  
=>      00000000000000000000000000000000
Explanation 2:    
         00000000000000000000000000000011 
=>       11000000000000000000000000000000
*/
#include<iostream>
#include<bitset>
using namespace std;

int main(){
    unsigned int a=3;
    unsigned int ans=0;
    for(int i=0;i<32;i++){
        ans<<=1;
        if(a&1==1){
            ans|=1;
        }
        a>>=1;
    }
    cout<<ans;
}