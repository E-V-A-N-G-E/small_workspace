/*Set Matrix Zeros
Given a matrix, A of size M x N of 0s and 1s. If an element is 0, set its entire row and 
column to 0. Note: This will be evaluated on the extra memory used. Try to minimize the 
space and time complexity. 
 Input Format:
The first and the only argument of input contains a 2-d integer matrix, A, of size M x N.
Output Format:
Return a 2-d matrix that satisfies the given conditions.
Constraints:
1 <= N, M <= 1000
0 <= A[i][j] <= 1
Examples:
Input 1:
    [   [1, 0, 1],
        [1, 1, 1], 
        [1, 1, 1]   ]

Output 1:
    [   [0, 0, 0],
        [1, 0, 1],
        [1, 0, 1]   ]

Input 2:
    [   [1, 0, 1],
        [1, 1, 1],
        [1, 0, 1]   ]

Output 2:
    [   [0, 0, 0],
        [1, 0, 1],
        [0, 0, 0]   ]
*/
#include<iostream>
#include<vector>

using namespace std;
int arr[3][3]={{1,2,0},{0,3,4},{1,1,1}};
void setzeros(){
    vector<int> row;
    vector<int> col;
    int i=0,j=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j]==0){
                row.push_back(i);
                col.push_back(j);
            }
        }
    }
    for(i=0;i<row.size();i++){
        for(j=0;j<3;j++){
            arr[row[i]][j]=0;
        }
    }
    for(i=0;i<col.size();i++){
        for(j=0;j<3;j++){
            arr[j][col[i]]=0;
        }
    }
}
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    setzeros();
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}