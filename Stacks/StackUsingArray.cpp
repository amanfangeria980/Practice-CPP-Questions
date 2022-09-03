#include<iostream>
using namespace std;

class Stack{
    int *data;
    int nextIndex;
    int capacity;
    public:
    Stack(int total_size){
        data=new int[total_size];
        nextIndex=0;
        capacity=total_size;
    }
    
    void push(int num){
        if(nextIndex==capacity){
            cout<<"Overflow"<<endl;
            return;
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
    Stack s(5);
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    cout<<s.isEmpty()<<endl;
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;    
    return 0;
}