#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')' || s[i]==']' || s[i]=='}'){
            if(st.empty()){
                return false;
            }
            st.pop();
            
        }
    }
    
    return st.empty();
}
int main(){
    string str="({[]})";
    bool res=isBalanced(str);
    if(res){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Unbalanced"<<endl;
    }
    return 0;
}