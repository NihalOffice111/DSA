#include<bits/stdc++.h>
using namespace std;
int lengthOfStringRecursive(string str , int i ){
    if(str[i] == '\0'){
        return 0;
    }
    return 1 + lengthOfStringRecursive(str,i+1);
}
int main(){
    string str = "feelpainknowpainacceptpain";
    int c = lengthOfStringRecursive(str , 0);
    cout<<c<<endl;
    return 0;
}