#include<iostream>
#include<utility>

using namespace std;

int intervals[5][2]={{1,2},{3,5},{6,7},{8,10},{12,16}};
int m=5;
int n=2;

void merge(pair<int,int>p){
    int a,b,c,d;
    int i,j;
    bool flg1=true;
    bool flg2=true;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(flg1 && p.first>=intervals[i][j]){
                if(j==0){
                    intervals[i][j]=p.first;
                }
                a=i;
                flg1=false;
            }
            if(flg2 && p.second >=intervals[i][j]){
                if(j==1){
                    c=i;
                    intervals[a][1]=max(p.second,intervals[i][j]);
                }
                flg2=false;
            }
        }
    }
    for(i=a+1;i<=c;i++){
        delete [] intervals[i];
    }
}

int main(){
    pair<int,int> p=make_pair(4,9);
    merge(p);
}