#include <bits/stdc++.h>
using namespace std;

// solution 1 very easy
// vector<int> getConcatenation(vector<int>& arr) {
//     int n=arr.size();
//     vector<int>ans;

//     for (int i = 0; i < n; i++)
//     {
//         ans.push_back(arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         ans.push_back(arr[i]);
//     }
    
//     return ans;
// }

// solution 2
// vector<int> getConcatenation(vector<int>& arr) {
//     int n = arr.size();
//     vector<int> ans = arr;
//     ans.insert(ans.end(), arr.begin(), arr.end());
//     return ans;
// }


// solution 3
vector<int> getConcatenation(vector<int>& arr) {
    vector<int>ans;
    ans.insert(ans.end(),arr.begin(),arr.end());
    ans.insert(ans.end(),arr.begin(),arr.end());
    return ans;
}

int main()
{
    vector<int>arr={1,2,1};
    vector<int>ans=getConcatenation(arr);
    for(auto val:ans){
        cout<<val<<" ";
    }
    return 0;
}