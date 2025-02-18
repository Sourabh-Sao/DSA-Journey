#include<bits/stdc++.h>
using namespace std;

void getAllSubset(vector<int>& arr,vector<int>&ans,int i,vector<vector<int>>&allSubsets){
    
    if (i==arr.size())
    {
        allSubsets.push_back({ans});
        return;
    }

    // inclusion 
    ans.push_back(arr[i]);
    getAllSubset(arr,ans,i+1,allSubsets);

    //exclusion

    ans.pop_back();
    int idx=i+1;
    while (idx<arr.size() && arr[idx]==arr[idx-1]) idx++;

    getAllSubset(arr,ans,idx,allSubsets);

}

vector<vector<int>> subsetsWithDup(vector<int>& arr) {
    int n=arr.size();
    sort(arr.begin(),arr.end());

    vector<vector<int>>allSubsets;
    vector<int>ans;

    getAllSubset(arr,ans,0,allSubsets);
    return allSubsets;
}

int main(){
    vector<int>arr={1,2,2};
    vector<vector<int>>ans=subsetsWithDup(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}