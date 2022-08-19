#include<iostream>
using namespace std;

int power(int x,int n){
    if(x==0 and n!=0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }
    int smallOutput=power(x,n-1);
    return x*smallOutput;
}


int main(){
    int ans=power(4,4);
    cout<<"4*4 is "<<ans;
    return 0;
}