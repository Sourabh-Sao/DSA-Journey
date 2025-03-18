#include<bits/stdc++.h>
using namespace std;

// another approach
// vector<int> rearrangeArray(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> ans(n, 0);
//     int pos = 0, neg = 1;
//     for(int i = 0; i < n; ++i) {
//         if(nums[i] >= 0) {
//             ans[pos] = nums[i];
//             pos += 2;
//         }
//         else {
//             ans[neg] = nums[i];
//             neg += 2;
//         }
//     }
//     return ans;
// }

vector<int> rearrangeArray(vector<int>& arr) {
    int n=arr.size();
    vector<int>PosArr;
    vector<int>NegArr;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            PosArr.push_back(arr[i]);
        }else{
            NegArr.push_back(arr[i]);

        }
    }
    vector<int>ans;
    int i=0,j=0;
    while (i<PosArr.size() && NegArr.size())
    {
        ans.push_back(PosArr[i]);
        i++;
        ans.push_back(NegArr[j]);
        j++;
    }
    return ans;
}

int main(){
    vector<int>arr={3,1,-2,-5,2,-4};
    vector<int>ans=rearrangeArray(arr);
    for(auto val:ans){
        cout<<val<<" ";
    }
    return 0;
}