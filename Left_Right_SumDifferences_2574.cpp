#include<bits/stdc++.h>
using namespace std;

vector<int> leftRightDifference(vector<int>& arr){
    int n=arr.size();
    vector<int>leftSum(n,0);
    vector<int>RightSum(n,0);
    vector<int>ans(n,0);

    // calculating leftsum
    leftSum[0]=0;
    for (int i = 1; i < n; i++)
    {
        leftSum[i]=leftSum[i-1]+arr[i-1];
    }
    

    RightSum[n-1]=0;
    for (int i = n-2; i >= 0; i--)
    {
        RightSum[i]=RightSum[i+1]+arr[i+1];
    }
    
    for (int i = 0; i < n; i++)
    {
        ans[i]=abs(leftSum[i]-RightSum[i]);
    }
    return ans;
}

int main(){
    vector<int>arr={10,4,8,3};
    vector<int>ans=leftRightDifference(arr);
    
    for(auto val:ans){
        cout<<val<<" ";
    }

    return 0;
}