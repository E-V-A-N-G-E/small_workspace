/*CoPrime Again

Problem Description
You are given 2 arrays A and B of size N and M respectively and a number K. 
You have to tell that how many pairs (A[i], B[j]) (1 <= i <= N and 1 <= j <= m) exists 
such that product of them is not CoPrime with K.   

Problem Constraints
1 <= N, M <= 1e5
1 <= A[i], B[j], K <= 1e6

Input Format
Given two Arrays A and B of Type Integer, and an Integer K.

Output Format
Return a single Integer P, the number of pairs.

Example Input
 A = [1, 2, 3]
 B = [2, 3, 4, 5] 
 K = 3

Example Output
 6

 Example Explanation
 There are total 12 pairs, and 6 pairs are there such that their product is not 
    coprime with k, i.e 6.
 These Pairs are :
    (1, 3), (2, 3), (3, 3), (3, 2), (3, 4), (3, 5)
*/
#include<iostream>
#include<array>
using namespace std;

int gcd(int a,int b){
    if(a<b){
        a=a^b;
        b=a^b;
        a=a^b;
    }
    int temp;
    while(b!=0){
        temp=a%b;
        a=b;
        b=a%b;
    }
    return a;
}
int main(){
    array A={1,2,3};
    array B={2,3,4,5};
    int K=3;
    int i=0;
    int cnt1=0;
    int cnt2=0;
    for(i;i<A.size();i++){
        if(gcd(A[i],K)==1)
            cnt1++;
    }
    for(i=0;i<B.size();i++){
        if(gcd(B[i],K)==1)
            cnt2++;
    }
    int ans=(A.size()*B.size())-(cnt1*cnt2);
    cout<<ans;
}