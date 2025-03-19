#include <bits/stdc++.h>
using namespace std;

vector<int>pivotArray(vector<int>&arr,int pivot){
    vector<int>ans;

    for(auto val:arr){
        if (val<pivot) ans.push_back(val);
    }
    for(auto val:arr){
        if (val==pivot) ans.push_back(val);
    }
    for(auto val:arr){
        if (val>pivot) ans.push_back(val);
    }
    return ans;
}
int main()
{
    vector<int> arr = {9, 12, 5, 10, 14, 3, 10};
    int pivot = 10;
    vector<int> ans = pivotArray(arr, pivot);
    for (auto val : ans)
    {
        cout << val << " ";
    }
    return 0;
}