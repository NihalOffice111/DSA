#include<bits/stdc++.h>
using namespace std;

void insertStack(stack<int> &s , int temp);

void sortStack(stack<int> &s){
    if(s.size() == 1){
        return;
    }
    int temp = s.top();
    s.pop();
    sortStack(s);
    insertStack(s,temp);
}

void insertStack(stack<int> &s , int temp){
    if(s.empty() || s.top() <= temp){
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insertStack(s,temp);
    s.push(val);
}

int main(){
    stack<int> s;
    s.push(5);
    s.push(1);
    s.push(0);
    s.push(2);

    sortStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}