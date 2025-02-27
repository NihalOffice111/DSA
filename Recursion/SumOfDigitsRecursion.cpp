#include<bits/stdc++.h>
using namespace std;

int sumOfDigitRecursion(int n ){
    if(n == 0){
        return 0;
    }
    return (n % 10) + sumOfDigitRecursion(n / 10);
}



int main(){
    int n = 5678;
    int sum = sumOfDigitRecursion(n);
    cout<<sum<<endl;
    return 0;
}