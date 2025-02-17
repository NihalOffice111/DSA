#include<bits/stdc++.h>
using namespace std;
char upperCharacter(string str , int i){
    if(str[i] == '\0'){
        return ' ';
    }
    if(str[i] >= 'A' && str[i] <= 'Z'){
        return str[i];
    }
    return upperCharacter(str, i+1);
}

int main(){
    string str = "feelpainknowpainacceptpain";
    char c = upperCharacter(str , 0);
    cout<<c<<endl;
    return 0;
}