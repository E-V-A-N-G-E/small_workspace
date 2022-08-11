/*Merge Intervals Given a set of non-overlapping intervals, insert a new interval into the intervals 
(merge if necessary). You may assume that the intervals were initially sorted according to their start times. 
Example 1: Given intervals [1,3],[6,9] insert and merge [2,5] would result in [1,5],[6,9]. 
Example 2: Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] would result in [1,2],[3,10],[12,16]. 
This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10]. Make sure the returned intervals 
are also sorted.
*/
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