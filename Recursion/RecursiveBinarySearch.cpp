#include<bits/stdc++.h>
using namespace std;

int recusiveBinarySearch(vector<int> v , int low ,int high , int target){
    
    if(low > high){
        return -1;
    }
    int mid = (low + high)/2;
    
    if(v[mid] == target){
        return mid;
    }
    else if(v[mid] < target){
        return recusiveBinarySearch(v,mid+1,high,target);
    }
    else{
        return recusiveBinarySearch(v,low,mid-1,target);
    }
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,8,10};
    int low = 0;
    int high = v.size()-1;
    int ans = recusiveBinarySearch(v,low,high,99);
    cout<<ans;
    return 0;
}