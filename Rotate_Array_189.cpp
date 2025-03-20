#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n; // Ensure k is within the range [0, n)

    // Reverse the entire array
    reverse(nums.begin(), nums.end());

    // Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);

    // Reverse the rest of the elements after k
    reverse(nums.begin() + k, nums.end());

    return nums;
}



int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    int n=arr.size();
    int k=3;
    for(int val:arr){
        cout<<val<<" ";
    }
    rotate(arr,k);
    cout<<endl;
    for(int val:arr){
        cout<<val<<" ";
    }

    return 0;
}