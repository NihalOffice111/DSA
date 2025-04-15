#include<bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> v, int target){
    int start = 0;
    int end = v.size()-1;

    int mid;
    int first = -1;
    while(start <= end){
        mid = start + (end - start)/2;

        if(v[mid] == target){
            first = mid;
            end = mid - 1;
        }
        else if(v[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return first;
}


int lastOccurence(vector<int> v ,int target){
    int start = 0;
    int end = v.size() -1;
    int mid ;
    int last = -1;
    while(start <= end){
        mid = start + (end - start)/2;

        if(v[mid] == target){
            last = mid;
            start = mid + 1;
        }
        else if(v[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid+1;
        }
    }
    return last;
}


void firstAndLast(vector<int> v  , int target){

    int x = firstOccurence(v,target);
    int y = lastOccurence(v,target);

    cout<<x<<" "<<y<<endl;
}


int main(){
    vector<int> v = {1,3,4,10,10,10,10,85,100,120};
    firstAndLast(v,10);
    return 0;
}