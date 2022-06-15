/*You have a newspaper which has A lines to read. You decided to start reading the 
1st line from Monday. You are given a schedule, B, where B[i] = number of lines 
you can read on that day. You are very strict in reading the newspaper and you 
will read as much as you can every day. Determine and return, which day of the 
week you will read the last line of the newspaper. 
 

Input Format
The first argument contains the single integer A — the number of lines in the 
newspaper. The second argument is an array B, of size 7 and those integers 
represent how many lines you can read on Monday, Tuesday, Wednesday, Thursday, 
Friday, Saturday and Sunday correspondingly. Note: It is guaranteed that at least
 one of the number in B[i] is larger than zero. 

Output Format
Return a single integer — the number of the day of the week, when you will finish
 reading the newspaper. The days of the week are numbered starting with one in 
 the order: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.

 Example Input
A = 100, B = [15, 20, 20, 15, 10, 30, 45]

Example Output
6

Problem Constraints
1 <= A <= 1000 0 <= B[i] <= 1000 
*/
#include<iostream>

using namespace std;

int finishingDay(int *p,int l){
    int lPerWeek=0;
    int i=6;
    while(i>=0){
        lPerWeek+=p[i];
        i--;
    }
    int n=l%lPerWeek;
    for(i=0;i<7;i++){
        n-=p[i];
        if(n<=0)
            return i+1;
    }
    return -1;
}
int main(){
    int arr[7]={1,2,3,4,0,0,7};
    int l=100;
    int n=finishingDay(arr,l);
    cout<<n;
}
