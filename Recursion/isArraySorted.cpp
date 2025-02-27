#include<bits/stdc++.h>
using namespace std;
bool isArraySortedRecursion(vector<int> v , int i ){
    if(i == v.size()){
        return true;
    }

    if(v[i] < v[i+1]){
        return isArraySortedRecursion(v,i+1);
    }
    return false;
}
int main(){
    vector<int> v ={1,22,33,45,77,90,722,825};
    int i = 0;
    bool flag = isArraySortedRecursion(v,i);
    cout<<flag<<endl;
    return 0;
}