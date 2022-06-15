#include<iostream>

using namespace std;

int n=10;
string arr[10];

void setString(){
    for (int i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            arr[i-1] ="FizzBuzz ";
            continue;
        }
        else if(i%3 ==0){
            arr[i-1]="Fizz ";
            continue;
        }
        else if(i%5==0){
            arr[i-1] ="Buzz ";
            continue;
        }
        arr[i-1]=i+48;
    }
}

int main(){
    setString();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}