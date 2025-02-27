#include<bits/stdc++.h>
using namespace std;
int countZeroes(int n,int count){
    if(n == 0){
        return count;
    }

    int rem = n % 10;
    if(rem == 0){
        return countZeroes(n / 10 , count +1);
    }
    return countZeroes(n/10 , count);
}
int main(){
    int num  = 10101010;//2
    int count =0;
    int n  = countZeroes(num,count);
    cout<<n<<endl;
    return 0;
}