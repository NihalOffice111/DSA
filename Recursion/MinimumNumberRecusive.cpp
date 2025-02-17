#include<bits/stdc++.h>
using namespace std;
int minimumElementRecursive(vector<int> v,int n){
    if(n == 1){
        return v[0];
    }
    
    return min(v[n-1] , minimumElementRecursive(v,n-1));
}
int main(){
    vector<int> v = {23,12,34,11,94,22};
    int mini  = minimumElementRecursive(v,v.size());
    cout<<mini<<endl;
    return 0;
}