/*Given, height of n contiguous buildings in an array, compute the total vol of water that can be trapped over all the buildings, if it rains. 
*/

#include<iostream>

using namespace std;

template <int N>
int waterTrapped(int (&arr)[N]){
        int n=sizeof(arr)/sizeof(arr[0]);
        
        int pre[n];
        int post[n];

        pre[0]=arr[0];
        post[n-1]=arr[n-1];

        int i=1;

        for(i;i<n;i++){
            pre[i]=max(arr[i],pre[i-1]);
            //cout<<pre[i]<<" ";
        }
        cout<<"\n";
        for(i=n-2;i>=0;i--){
            post[i]=max(arr[i],post[i+1]);
            //cout<<post[i]<<" ";
        }
        int water=0;
        for(i=0;i<n;i++){
            water+=(min(pre[i],post[i])-arr[i]);
        }
        return water;
}

int main(){
        int arr[]={1,7,3,6,2,6};
        int water=waterTrapped(arr);
        cout<<water;
}
