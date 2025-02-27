#include<bits/stdc++.h>
using namespace std;
int factorialRecursive(int n){
    if(n == 1){
        return 1;
    }

    return n *  factorialRecursive(n-1);
}
int main(){
    int fact = factorialRecursive(5);
    cout<<fact<<endl;
    return 0;
}