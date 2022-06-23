/*
Combination Sum II
Problem Description
Given an array of size N of candidate numbers A and a target number B. Return all unique combinations in A where the candidate numbers sums to B.  Each number in A may only be used once in the combination. Note:
All numbers (including target) will be positive integers.
Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
The solution set must not contain duplicate combinations.
 Warning: DO NOT USE LIBRARY FUNCTION FOR GENERATING COMBINATIONS. Example : itertools.combinations in python. If you do, we will disqualify your submission and give you penalty points.    
Problem Constraints
1 <= N <= 20
Input Format
First argument is an integer array A denoting the collection of candidate numbers.
Second argument is an integer which represents the target number. 
Output Format
Return all unique combinations in A where the candidate numbers sums to B.
Example Input
Input 1:
A = [10, 1, 2, 7, 6, 1, 5]
B = 8
    
Example Output
Output 1:
[ [1 1 6 ]
  [1 2 5 ]
  [1 7 ] 
  [2 6 ] ]
    
Example Explanation
Explanation 1:
 1 + 1 + 6 = 8
 1 + 2 + 5 = 8
 1 + 7 = 8
 2 + 6 = 8
 All the above combinations sum to 8 and are arranged in ascending order.
*/
#include<iostream>
#include<vector>

using namespace std;

vector<int>a={10, 1, 2, 7, 6, 1, 5};
int n=a.size();
vector<vector<int>>ans;
vector<int>temp;

bool sumRight(){
    int sum=0;
    for(auto it:temp){
        sum+=it;
    }
    if(sum==8)
        return 1;
    else 
        return 0;
}
void combinationSum(int pos){
    if(pos>=n){
        if(sumRight()){
            ans.push_back(temp);
        }
        return;
    }
    else{
        temp.push_back(a[pos]);
        combinationSum(pos+1);
        temp.pop_back();
        combinationSum(pos+1);
    }
}

int main(){
    combinationSum(0);
    for(auto i:ans){
        cout<<"[";
        for(auto j:i){
            cout<<j<<",";
        }
        cout<<"]";
    }
}