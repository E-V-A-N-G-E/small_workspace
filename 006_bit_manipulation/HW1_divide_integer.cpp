/*Divide Integers
Divide two integers without using multiplication, division and mod operator. 
Return the floor of the result of the division. Example:
5 / 2 = 2
Also, consider if there can be overflow cases. For overflow case, return INT_MAX. Note: INT_MAX = 2^31 - 1
*/
#include<iostream>
using namespace std;

int main(){
    int a=5;
    int b=2;
    unsigned long long int q=0;
    unsigned long long int t=0;
    for(int i=31;i>=0;i--){
        if((t+(b<<i))<=a){
            t+=(b<<i);
            q=q|(1<<i);
        }
    }
    (q<INT_MIN || q>=INT_MAX)?q=INT_MAX:q;
    cout<<q;
}
