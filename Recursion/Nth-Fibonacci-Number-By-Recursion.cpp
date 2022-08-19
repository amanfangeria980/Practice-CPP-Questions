#include<iostream>
using namespace std;

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int main(){
    int n;
    cin>>n; //nth fibonacci no. starting from 0
    int res=fib(n);
    cout<<"fibonacci no. "<<n<<" is "<<res;
    return 0;
}