#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class Stack{
    Node *head;
    int size;
    public:
    Stack(){
        head=NULL;
        size=0;
    }

    void push(int element){
        //we will insert at head not at tail because we will then have to maintain and store all the address along with tail when using pop operation.
        Node *newNode=new Node(element);
        if(head==NULL){
            head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
        size++;
    }

    int pop(){
        if(isEmpty()){
             cout<<"Underflow! Stack is Empty"<<endl;
             return INT_MIN;
        }
        int data=head->data;
        head=head->next;
        size--;
        return data;
    }

    bool isEmpty(){
        return (head==NULL);
    }

    int top(){
        if(isEmpty()){
            cout<<"Underflow! Stack is Empty"<<endl;
            return INT_MIN;
        }
        return head->data;
    }

    int getSize(){
        return size;
    }
};


int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30); //head yaha hai abhi
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}