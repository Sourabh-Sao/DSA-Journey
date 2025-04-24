#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
    int n=arr.size();
    vector<int>ans;
    set<int>st;

    for(int i=0;i<n;i++){
        if (st.count(arr[i]))
        {
            ans.push_back(arr[i]);
        }
        st.insert(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int>arr={4,3,2,7,8,2,3,1};
    vector<int>ans=findDuplicates(arr);
    for(auto val:ans){
        cout<<val<<" ";
    }

    return 0;
}