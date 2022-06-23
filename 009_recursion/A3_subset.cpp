/*
Subset
Problem Description
Given a set of distinct integers, S, return all possible subsets. NOTE:
Elements in a subset must be in non-descending order.
The solution set must not contain duplicate subsets.
Also, the subsets should be sorted in ascending ( lexicographic ) order.
The list is not necessarily sorted.
Problem Constraints
1 <= |S| <= 16
INTMIN <= S[i] <= INTMAX
Input Format
First and only argument of input contains a single integer array S.
Output Format
Return a vector of vectors denoting the answer.
Example Input
 S = [1, 2, 3]
Example Output
[
 []
 [1]
 [1, 2]
 [1, 2, 3]
 [1, 3]
 [2]
 [2, 3]
 [3]
]
Example Explanation
You can see that these are all possible subsets.
*/
#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>>ans;
vector<int>temp;
void permute(vector<int>a,int n,int pos){
    if(pos>=n){
        ans.push_back(temp);
        return;
    }
    else{
        temp.push_back(a[pos]);
        permute(a,n,pos+1);
        temp.pop_back();
        permute(a,n,pos+1);
    }
}   

int main(){
    vector<int> a={1,2,3};
    int n=a.size();
    permute(a,n,0);
    for(auto i:ans){
        cout<<"[";
        for(auto j:i){
            cout<<j<<",";
        }
        cout<<"]";
    }
}