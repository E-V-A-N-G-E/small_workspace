#include<bits/stdc++.h>
using namespace std;

int maxCons(int *p,int n){
    int minVal=p[0];
    int maxVal=p[0];
    int i=0;
    for(i=1;i<n;i++){
        if(p[i]>maxVal){
            maxVal=p[i];
        }    
        if(p[i]<minVal){
            minVal=p[i];
        }
    }
    cout<<maxVal<<" "<<minVal<<endl;
    vector<pair<int, int>> v;
    for(i=0;i<n;i++){
        v.push_back(make_pair(-1,-1));
    }
    int min_gap=(maxVal-minVal)/(n-1);
    cout<<min_gap<<endl;
    int vIndex;
    for(i=0;i<n;i++){
        vIndex=(p[i]-minVal)/min_gap;
        if(v[vIndex].first<0){
            v.at(vIndex).first =p[i];
            v.at(vIndex).second =p[i];
        }
        else if(p[i]<v[i].first){
            v.at(vIndex).first=min(p[i],v.at(vIndex).first);
        }
        else if(p[i]>v[i].second){
            v.at(vIndex).second=max(p[i],v.at(vIndex).second);
        }
    }
    int diff=0,maxdiff=0;
    int prevIn=0;
    for(i=0;i<n;i++){
        if(v[i].first>0){
            maxdiff=max(v[i].first-v[prevIn].first,maxdiff);
            prevIn=i;
        }
    }
    return maxdiff;
}

int main(){
    int arr[]={1,5,4,8,3,2};
    int n=6;
    int maxVal=maxCons(arr,n);
    cout<<maxVal;
}