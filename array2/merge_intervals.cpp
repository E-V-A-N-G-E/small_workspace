#include<iostream>
#include<utility>
#include<vector>

using namespace std;

vector<pair<int,int>> intervals={{1,2},{3,5},{6,7},{8,10},{12,16}};
int m=5;
int n=2;

vector<pair<int,int>> merge(pair<int,int>p){
    vector<pair<int,int>> result;
    int cnt=0;
    if(intervals.size()==0)
        return result;
    vector<int>::iterator it= intervals.begin();
    for(auto it:intervals){
        cnt++;
        if(p.first<=it.second){
            p.second=max(it.second,p.second);
            p.first=min(p.first,it.first);
        }
        else{
            result.push_back(p);
        }
    }
    it = intervals.begin()+cnt;
    for(intervals){
        
    }
}

int main(){
    pair<int,int> p=make_pair(4,9);
    merge(p);
}