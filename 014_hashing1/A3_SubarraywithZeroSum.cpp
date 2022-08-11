#include<unordered_set>
#include<iostream>

using namespace std;

bool findifsumzero(int A[],int n){
    unordered_set<int>s1;
    s1.insert(A[0]);
    int pre=A[0];
    for(int i=1;i<n;i++){
        if(s1.find(pre+A[i])!=s1.end()){
            return true;
        }
        s1.insert(pre+A[i]);
    }
    return false;
}
int main(){
    int A[]={1,2,3,4,5};
    int n=sizeof(A)/sizeof(int);
    bool ans=findifsumzero(A,n);
    cout<<ans;
}