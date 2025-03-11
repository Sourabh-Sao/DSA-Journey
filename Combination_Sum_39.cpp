#include <bits/stdc++.h>
using namespace std;

// now both code work perfectly

// solution 1 using set
// set<vector<int>>s;
//     void helper(vector<int>& arr,int idx,int tar, vector<vector<int>>&ans,vector<int>&combin){
//         if (tar < 0 || idx==arr.size()) {
//             return;
//         }
//         if (tar == 0) {
//             if(s.count(combin)==0){
//             ans.push_back(combin);
//             s.insert(combin);
//             }
//             return;
//         }
//         // Include current element
//         combin.push_back(arr[idx]);
//         // single
//         helper(arr,idx+1,tar-arr[idx],ans,combin);

//         helper(arr,idx,tar-arr[idx],ans,combin);

//         combin.pop_back();
//         // isme item include nahi kr rhe h to target se kuch substrack nahi ,hoga , aur idx +1 kyu ki current elemnt k liye exclude ka choice liye h to ab uske baad wale element k liye choice lenge  
//         helper(arr,idx+1,tar,ans,combin);

//     }

//     vector<vector<int>> combinationSum(vector<int>& arr, int target) {
//     vector<vector<int>> ans;
//     vector<int> combin;
//     helper(arr, 0, target, ans, combin);
//     return ans;
//     }



// solution 2  withour using set
void helper(vector<int> &arr, int idx, int tar, vector<vector<int>> &ans, vector<int> &combin)
{
    if (tar < 0 || idx == arr.size())
    {
        return;
    }
    if (tar == 0)
    {
        ans.push_back(combin);
        return;
    }

    // Include current element
    combin.push_back(arr[idx]);
    helper(arr, idx, tar - arr[idx], ans, combin); 

    combin.pop_back();

    // Exclude current element
    helper(arr, idx + 1, tar, ans, combin);
}

vector<vector<int>> combinationSum(vector<int> &arr, int target)
{
    vector<vector<int>> ans;
    vector<int> combin;
    helper(arr, 0, target, ans, combin);
    return ans;
}


int main()
{
    vector<int> a = {2, 3, 5};
    int target = 8;

    vector<vector<int>> ans = combinationSum(a, target);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}