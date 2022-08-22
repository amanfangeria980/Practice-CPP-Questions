#include<iostream>
using namespace std;

int multiplyNumbers(int m,int n){
    if(m==0 || n==0){
        return 0;
    }
    return m+multiplyNumbers(m,n-1);
}
int main(){
    int m=4;
    int n=4;
    int res=multiplyNumbers(m,n);
    cout<<"Multiplication is : "<<res<<endl;
    return 0;
}