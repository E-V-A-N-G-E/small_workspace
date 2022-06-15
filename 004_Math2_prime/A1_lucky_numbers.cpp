/*Lucky Numbers

A lucky number is a number which has exactly 2 distinct prime divisors. 
You are given a number N and you need to determine the count of lucky numbers
between the range 1 to N (both inclusive). Input

The first argument contains one integer number N (1 ≤  N  ≤ 5000)

Output
Return an integer i.e the count of lucky numbers between 1 and N, both inclusive.
Examples Input
8
Output
1 
Explanation Testcase 1-
Between [1,8] there is only 1 lucky number i.e 6
*/
#include<iostream>
#include<algorithm>
using namespace std;

int luckyNum(int n){
    int sieve[n+1];
    fill_n(sieve,n+1,1);
    
    for(int i=2;i<=n/2;i++){
        for(int j=2;j*i<=n;j++){
            sieve[i*j]=0;
            cout<<i*j;
        }
        cout<<" ,";
    }
    int cnt=0;
    for(int i=2;i<=n/2;i++){
        if(sieve[i]==1){
        for(int j=i+1;j<=n/2;j++){
            if(j%i==0){
                sieve[j]+=1;
            }
        }
        }
    }
    for(int i=0;i<=n;i++){
        if(sieve[i]==2){
            cnt++;
            cout<<i<<" ";
        }
    }
    return cnt;
}
int main(){
    int n=8;
    int ans=luckyNum(n);
    cout<<ans;
}