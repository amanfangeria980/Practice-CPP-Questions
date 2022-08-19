#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    return search(arr+1,size-1,key);
}


int main(){
    int arr[5]={6,7,8,9,10};
    int size=sizeof(arr)/sizeof(int);
    int key=8;
    if(search(arr,size,key)){
        cout<<"Element Found";
    }
    else{
        cout<<"Element Not Found";
    }
    return 0;
}