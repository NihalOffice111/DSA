#include<bits/stdc++.h>
using namespace std;
void insertArray(vector<int> &v , int temp);
void sortArray(vector<int> &v){
    if(v.size() == 1){
        return;
    }

    int temp = v[v.size()-1];
    v.pop_back();
    sortArray(v);
    insertArray(v,temp);
}

void insertArray(vector<int> &v , int temp){
    if(v.size() == 0 || v[v.size()-1] <= temp){
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insertArray(v,temp);
    v.push_back(val);
}
int main(){
    vector<int> v = {0,1,5,2};
    sortArray(v);

    for(auto x : v){
        cout<<x<<" ";
    }
    return 0;
}