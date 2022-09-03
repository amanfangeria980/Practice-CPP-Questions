#include<iostream>
using namespace std;

class Stack{
    int *data;
    int nextIndex;
    int capacity;
    public:
    Stack(){
        capacity=4;
        nextIndex=0;
        data=new int[capacity];
    }
    
    void push(int num){
        if(nextIndex==capacity){ 
            //capacity double karna hai aur naya array banake purana element copy krna hai naya array me
            int *newData=new int(2*capacity);
            for(int i=0;i<capacity;i++){
                newData[i]=data[i];
            }
            delete [] data;
            data=newData;
            delete newData;
            capacity*=2;
        }
        data[nextIndex]=num;
        nextIndex++;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top(){
        if(isEmpty()){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex==0;
    }
};

int main(){
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    s.push(30);
    s.push(35);
    s.push(40);
    s.push(45);
    cout<<s.isEmpty()<<endl;
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;    
    return 0;
}