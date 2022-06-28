#include<iostream>
#include<vector>
using namespace std;
char source='A';
char dest='B';
char aux='C';

void printsteps(int n,char source,char aux,char dest){
    if(n==0){
        return;
    }
    else{
        printsteps(n-1,source,dest,aux);
        cout<<"moving "<<n<<" from "<<source<<" to "<<dest<<endl;
        printsteps(n-1,aux,source,dest);
    }
}
int main(){
    int n=4;
    printsteps(n,source,dest,aux);
}