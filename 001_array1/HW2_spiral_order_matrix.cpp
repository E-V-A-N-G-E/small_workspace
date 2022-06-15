/*Spiral Order Matrix II
Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order. 
 Input Format:
The first and the only argument contains an integer, A.
Output Format:
Return a 2-d matrix of size A x A satisfying the spiral order.
Constraints:
1 <= A <= 1000
Examples:
Input 1:
    A = 3

Output 1:
    [   [ 1, 2, 3 ],
        [ 8, 9, 4 ],
        [ 7, 6, 5 ]   ]

Input 2:
    4

Output 2:
    [   [1, 2, 3, 4],
        [12, 13, 14, 5],
        [11, 16, 15, 6],
        [10, 9, 8, 7]   ]
*/
#include<iostream>
using namespace std;

void makeMatrix(int A){
    int mat[A][A];
    //int ** p= mat;
    int cnt=1;
    int start=0;
    int end=A-1;
    int i=0;
    while(cnt<=A*A){
        for(i=start;i<=end;i++){
            mat[start][i]=cnt;   
            cnt++;
        }
        for(i=start+1;i<=end;i++){
            mat[i][end]=cnt; 
            
            cnt++;
        }
        for(i=end-1;i>=start;i--){
            mat[end][i]=cnt; 
            cnt++;
        }
        for(i=end-1;i>start;i--){
            mat[i][start]=cnt; 
            cnt++;
        }
        start++;
        end--;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    //return p;
}

int main(){
    int A=3;
    makeMatrix(A);
    /*for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<(*((*p+i)+j))<<" ";
        }
        cout<<endl;
    }*/
}