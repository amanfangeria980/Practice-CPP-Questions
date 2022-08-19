#include<iostream>
using namespace std;

int fact(int num){

    if(num==0)
    return 1;

    // cout<<num<<endl;
    else
    return num*fact(num-1);
}

int main(){
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<"Factorial of "<<n<<" is "<<ans<<endl;
    return 0;
}