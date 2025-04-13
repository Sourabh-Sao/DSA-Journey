#include <bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& arr, int k) {
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
        if (mp.find(arr[i]) != mp.end() && i - mp[arr[i]] <= k) {
            return true;
        }
        mp[arr[i]] = i;
    }
    return false;
}

int main() {
    vector<int> nums1 = {1, 2, 3, 1};
    int k1 = 3;
    cout << containsNearbyDuplicate(nums1, k1) << endl; // Expected output: 1 (true)

    return 0;
}