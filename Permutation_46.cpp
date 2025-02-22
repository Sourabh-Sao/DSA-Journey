#include<bits/stdc++.h>
using namespace std;

void getPerm(vector<int>&arr,vector<vector<int>>&ans,int idx){
    if (idx==arr.size())
    {
        ans.push_back({arr});
        return;
    }


    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[i],arr[idx]);
        getPerm(arr,ans,idx+1);
        swap(arr[i],arr[idx]);

    }
    
    
}

vector<vector<int>> permute(vector<int>&arr){
    vector<vector<int>>ans;

    getPerm(arr,ans,0);
    return ans;
}

int main(){
    vector<int>arr={1,2,3};
    vector<vector<int>>ans=permute(arr);

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