/*You are given an Array of boxes A, where each box consists of oranges. 
You really love oranges, and you want to eat atleast B oranges. 
You start from the 0th index of the array, and keep eating oranges until you eat B oranges. 
If oranges from a box at ith index get depleted, you start eating from the (i+1)th box. 
Determine index of the box where you finish eating B number of oranges. 
If you don't eat B oranges even after eating from all the boxes, return -1.*/

#include<iostream>

using namespace std;

int indOfOranges(int *arr,int n,int o){
    int sum=0;    
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>=o)
            return i;
    }
    return -1;
}
int main(){
    int arr[]={1,2,2,5};
    int s=5;
    int o=9;
    int ind=indOfOranges(arr,s,o);
    cout<<ind;
}