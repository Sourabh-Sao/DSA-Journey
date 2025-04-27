#include<bits/stdc++.h>
using namespace std;

vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
        mp[nums[i]] = i;
    for (auto oper : operations) {
        nums[mp[oper[0]]] = oper[1];
        mp[oper[1]] = mp[oper[0]];
    }
    return nums;
}

int main(){
    vector<int>arr={1,2,4,6};
    vector<vector<int>> operations={{1,3},{4,7},{6,1}};


    return 0;
}