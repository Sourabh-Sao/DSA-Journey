// Que
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity
// and use only constant extra space.

#include<iostream>
#include<vector>
using namespace std;

int unique(vector<int>arr){
    int ans=0;
    for(auto val:arr){
        ans^=val;
    }
    return ans;
}

int main(){
    vector<int> vec={1,2,4,2,1};
    cout<<unique(vec);


    return 0;
}