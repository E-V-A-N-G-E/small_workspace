/*Excel Column Title
Problem Description
Given a positive integer, return its corresponding column title as appear in an Excel sheet. For example:
    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
 
Problem Constraints
1 <= A <= INTMAX

Input Format
First and only argument of input contains single integer A

Output Format
Return a string denoting the corresponding title.

Example Input
 A = 27

Example Output
 "AA"

Example Explanation
    1 -> A,
    2 -> B,
    3 -> C,
    ...
    26 -> Z,
    27 -> AA,
    28 -> AB 
*/
#include<iostream>
#include<string>

using namespace std;

string colTitle(int a){
    string ans="";
    char c;
    while(a){
        c='A'+(a-1)%26;
        ans=c+ans;
        a=(a-1)/26;
    }
    return ans;
}
int main(){
    int a=28;
    string ans=colTitle(a);
    cout<<ans;
}