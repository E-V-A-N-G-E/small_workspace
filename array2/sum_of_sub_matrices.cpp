
#include<iostream>
using namespace std;

int mat[2][2]={{1,2},{3,4}};
int n=2;
int sumSubMatOptimized(){
    //O(n*n)-------------------------------------------->greatly optimized (reverse lookup)
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=mat[i][j]*(i+1)*(j+1)*(n-i)*(n-j);
        }
    }
    return sum;
}
//O(n^4)----------------------------------------------->if DP applied---should track all subarrays
int sumSubMat(){
//O(n^6)----------------------------------------------->brute force
//1:22pm - 1:34pm
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=i;k<n;k++){
                for(int l=j;l<n;l++){
                    for(int m=i;m<=k;m++){
                        for(int p=j;p<=l;p++){
                            sum+=mat[m][p];
                        }
                    }
                }
            }
        }
    }
    return sum;
}


int main(){
    int sum1=sumSubMatOptimized();
    int sum2=sumSubMat();
    cout<<sum1<<" "<<sum2;
}