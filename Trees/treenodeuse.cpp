#include<iostream>
#include"treenode.h"
using namespace std;

int main(){
    Treenode<int> *root=new Treenode<int>(1);
    Treenode<int> *node1=new Treenode<int>(2);
    Treenode<int> *node2=new Treenode<int>(3);
    root->child.push_back(node1);
    root->child.push_back(node2);
    return 0;
}