#include<iostream>
using namespace std;

int FirstIndexOfNumber(int arr[],int size,int x){
    if(size==0){
        return -1;
    }
    if(arr[0]==x){
        return 0;
    }
    int smallOutput=FirstIndexOfNumber(arr+1,size-1,x);
    if(smallOutput==-1){
        return -1;
    }
    else{
        return smallOutput+1;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int x=4;
    int size=sizeof(arr)/sizeof(arr[0]);
    int index=FirstIndexOfNumber(arr,size,x);
    cout<<"Resultant Index "<<index<<endl;
    return 0;
}