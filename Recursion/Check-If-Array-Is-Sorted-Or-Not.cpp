#include<iostream>
using namespace std;


bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool isSmallerArrSorted= isSorted(arr+1,size-1);
    return isSmallerArrSorted;
}


int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(isSorted(arr,size)){
        cout<<"Array is Sorted"<<endl;
    }
    else{
        cout<<"Array is Not Sorted";
    }
    return 0;
}