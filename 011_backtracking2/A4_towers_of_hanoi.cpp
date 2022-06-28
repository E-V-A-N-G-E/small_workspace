#include<iostream>
#include<vector>
using namespace std;
char source='A';
char dest='B';
char aux='C';

void printsteps(int n,char source,char aux,char dest){
    if(n==1){
        cout<<"moving 1 from "<<source<<" to "<<dest<<endl;
        return;
    }
    else if(n==2){
        cout<<"moving 1 from "<<source<<" to "<<aux<<endl;
        cout<<"moving 2 from "<<source<<" to "<<dest<<endl;
        cout<<"moving 1 from "<<aux<<" to "<<dest<<endl;
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