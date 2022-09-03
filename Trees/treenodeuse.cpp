#include<iostream>
#include"treenode.h"
using namespace std;

Treenode<int>* takeInput(){
    int rootData;
    cout<<"Enter Root Data: ";
    cin>>rootData;
    Treenode<int>* root=new Treenode<int>(rootData);
    int n;
    cout<<"Enter Num of Child Nodes of "<<rootData<<": ";
    cin>>n;
    for(int i=0;i<n;i++){
        Treenode<int>* child=takeInput();
        root->child.push_back(child);
    }
    return root;
}

void printTree(Treenode<int> *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" : ";
    for(int i=0;i<root->child.size();i++){
        cout<<root->child[i]->data<<" ";
    }cout<<endl;
    for(int i=0;i<root->child.size();i++){
        printTree(root->child[i]);
    }
}


int main(){
    Treenode<int> *root=new Treenode<int>(1);
    Treenode<int> *node1=new Treenode<int>(2);
    Treenode<int> *node2=new Treenode<int>(3);
    root->child.push_back(node1);
    root->child.push_back(node2);
    printTree(root);

    Treenode<int> *tree1root = takeInput();
    printTree(tree1root);
    return 0;
}