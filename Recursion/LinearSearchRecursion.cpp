#include<bits/stdc++.h>
using namespace std;
int linearSearchRecursion(vector<int> v , int target , int i ){
    if(i == v.size()){
        return -1;
    }

    if(target == v[i]){
        return v[i];
    }

    return linearSearchRecursion(v,target,i+1);
}
int main(){
    int i = 0;
    vector<int> v = {12 ,34 ,1,56 ,36,11};
    int target = 516;
    int n = linearSearchRecursion(v,target,i);
    cout<<n<<endl;
    return 0;
}