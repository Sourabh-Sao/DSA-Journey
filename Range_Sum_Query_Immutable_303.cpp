#include<bits/stdc++.h>
using namespace std;

// solution 1  (brute force approach)
// vector<int>nums;
//     NumArray(vector<int>& nums) {
//         this->nums=nums;
//     }
    
//     int sumRange(int left, int right) {
//         int ans=0;
//         for(int i=left;i<=right;i++){
//             ans+=nums[i];
//         }

//         return ans;
//     }


// solution 2 optimal approach
vector<int>prefix;
NumArray(vector<int>& nums) {
    prefix.resize(nums.size());
    prefix[0]=nums[0];
    for(int i=1;i<nums.size();i++){
        prefix[i]=prefix[i-1]+nums[i];
    }
}

int sumRange(int left, int right) {
    if(left-1>=0){
        return prefix[right]-prefix[left-1];
    }
        return prefix[right];
}



int main(){
    vector<int>arr={-2, 0, 3, -5, 2, -1};
    
    return 0;   
}