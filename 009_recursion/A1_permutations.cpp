#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

vector<string>ans;
void permute(string s,int pos,int n){
    if(pos>=n-1){
        ans.push_back(s);
        return;
    }
    else{
        for(int i=pos;i<n;i++){
            swap(s[pos],s[i]);
            permute(s,pos+1,n);
            swap(s[pos],s[i]);
        }
    }
}
int main(){
    string s="abcd";
    int n=s.length();
    
    permute(s,0,n);
    for(auto i:ans){
        cout<<i<<" ";
    }

}