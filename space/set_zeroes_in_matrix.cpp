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