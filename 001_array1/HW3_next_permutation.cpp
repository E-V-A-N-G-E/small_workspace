/*Next Permutation
Implement the next permutation, which rearranges numbers into the numerically next 
greater permutation of numbers for a given array A of size N. If such arrangement is 
not possible, it must be rearranged as the lowest possible order i.e., sorted in an 
ascending order. Note:
1. The replacement must be in-place, do **not** allocate extra memory.
2. DO NOT USE LIBRARY FUNCTION FOR NEXT PERMUTATION. Use of Library functions will 
disqualify your submission retroactively and will give you penalty points.
Input Format:
The first and the only argument of input has an array of integers, A.
Output Format:
Return an array of integers, representing the next permutation of the given array.
Constraints:
1 <= N <= 5e5
1 <= A[i] <= 1e9
Examples:
Input 1:
    A = [1, 2, 3]

Output 1:
    [1, 3, 2]

Input 2:
    A = [3, 2, 1]

Output 2:
    [1, 2, 3]

Input 3:
    A = [1, 1, 5]

Output 3:
    [1, 5, 1]

Input 4:
    A = [20, 50, 113]

Output 4:
    [20, 113, 50]
*/

#include<iostream>

using namespace std;
//search---->O(n)
//search---->O(n)
//swap--------->O(1)
//reverse------>O(n){sort--------->can be done in O(nlogn)/O(n*n)}
//t.c(if reversed-------->O(n)         if sorted---->nlogn/O(n*n)
int * nextPermute(int arr[],unsigned int n){
    int indexA,indexB;
    int temp;
    int i=n-1;
    for(i=n-1;i>0;i--){
        if(arr[i-1]<arr[i]){
            indexA=i-1;
            break;
        }
    }
    int max=0;
    bool flag=true;
    for(i=indexA+1;i<n;i++){
        if(arr[i]>arr[indexA]){
            if(flag){
                indexB=i;
                max=arr[i];
                flag=false;
            }
            if(arr[i]<=max){
                max=arr[i];
                indexB=i;
            }
        }
    }
    temp=arr[indexA];
    arr[indexA]=arr[indexB];
    arr[indexB]=temp;
    /*for(i=indexA+1;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }*/
    int j;
    for(i=indexA+1,j=n-1;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return arr;
}
int main(){
    int arr[] = {1,1,2,6,5,3};
    unsigned int n = sizeof(arr)/sizeof(arr[0]);
    int * p=nextPermute(arr, n);
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
}
