#include<iostream>
#include<utility>
using namespace std;


int mat[4][3]={{1,2,3},{4,5,6},{7,8,8},{8,9,9}};
int n=4;
int m=3;

pair<int,int> loc(int num){
    int p;
    pair<int,int> in;
    in=make_pair(-1,-1);
    for(int i=0;i<4;){
        for(int j=m-1;j>=0;){
            if(mat[i][j]==num){
                in.first=i;
                in.second=j;
                return in;
            }
            else if(mat[i][j]>num)
                j--;
            else 
                i++;
        }
    }
    return in;
}

int main(){
    int num=5;
    pair<int,int> p=loc(num);
    cout<<p.first<<" "<<p.second;
}