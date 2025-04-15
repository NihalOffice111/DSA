#include<bits/stdc++.h>
using namespace std;
string skipTheCharacter(string str , char ch ,int i){
    
    if(i == str.length()){
        return str;
    }

    if(str[i] == ch){
        return skipTheCharacter(str.erase(i,1) , ch, i );
    }
    else{
        return skipTheCharacter(str,ch,i+1);
    }
}
int main() {
    int i = 0;
    cout << skipTheCharacter("hello", 'l' ,i) << endl;       // "heo"
    cout << skipTheCharacter("apple", 'p',i) << endl;       // "ale"
    cout << skipTheCharacter("banana", 'a',i) << endl;      // "bnn"
    cout << skipTheCharacter("mississippi", 'i',i) << endl; // "msssspp"
    cout << skipTheCharacter("character", 'c',i) << endl;   // "haraater"
    cout << skipTheCharacter("recursion", 'r',i) << endl;   // "ecusion"
    cout << skipTheCharacter("abcdef", 'z',i) << endl;      // "abcdef" (no change)
    cout << skipTheCharacter("xxxxxx", 'x',i) << endl;      // "" (empty string)
    cout << skipTheCharacter("123456", '3',i) << endl;      // "12456"
    cout << skipTheCharacter("testing", 't',i) << endl;     // "esing"
    cout << skipTheCharacter("aaaabbbb", 'b',i) << endl;    // "aaaa"
    cout << skipTheCharacter("racecar", 'r',i) << endl;     // "aceca"
    cout << skipTheCharacter("programming", 'm',i) << endl; // "prograing"
    cout << skipTheCharacter("hello world!", 'o',i) << endl;// "hell wrld!"
    cout << skipTheCharacter("", 'x',i) << endl;            // "" (empty input)
    
    return 0;
}
