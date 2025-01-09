#include<bits/stdc++.h>
using namespace std;

int sumOfElements(vector<int> v , int size){
    if(size == 0){
        return 0;
    }

    return v[size-1] + sumOfElements(v,size-1);
}

int main(){
    vector<int> v = {1,2,3,4,5};
    int sum = sumOfElements(v,v.size());
    cout<<sum<<endl;
    return 0;
}