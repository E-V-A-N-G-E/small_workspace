#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v={1,2,3};
    vector<int>::iterator it;
    it=v.begin()+1;
    cout<<v.size()<<" ";
    v.erase(it);
    v.shrink_to_fit();
    cout<<v.size();
    cout<<v[1];

}