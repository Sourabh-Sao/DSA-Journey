#include <bits/stdc++.h>
using namespace std;

void getSubsets(vector<int>&arr ,int i, vector<int>&ans,vector<vector<int>>&allsubsets){

    if (i==arr.size())
    {
        allsubsets.push_back(ans);
        return;
    }
    
    // include
    ans.push_back(arr[i]);
    getSubsets(arr,i+1,ans,allsubsets);

    ans.pop_back();

    // exclude
    getSubsets(arr,i+1,ans,allsubsets);


}

vector<vector<int>> subsets(vector<int> &arr)
{
    vector<vector<int>>allsubsets;
    vector<int>ans;

    getSubsets(arr,0,ans,allsubsets);

    return allsubsets;
}

int main()
{

    return 0;
}