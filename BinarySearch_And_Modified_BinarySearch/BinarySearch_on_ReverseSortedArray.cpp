#include<bits/stdc++.h>
using namespace std;

int binSearchOnReversedArray(vector<int> v,int target){
    int start = 0;
    int end  = v.size()-1;

    int mid;

    while(end < v.size()){
        mid = start + (end - start)/2;

        if(v[mid] == target){
             return mid;
        }

        else if(v[mid] > target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> v  = {129,90,81,32,22,12,10,5};

    int index = binSearchOnReversedArray(v,222 );
    cout<<index<<endl;
    return 0;
}