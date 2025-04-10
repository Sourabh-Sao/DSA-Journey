#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& arr) {
    unordered_set<int>st;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if (st.count(arr[i]))
        {
            return true;
        }
        st.insert(arr[i]);
        
    }
    return false;
}

int main()
{
    vector<int>arr={1,2,3,1};
    cout<<containsDuplicate(arr);
    return 0;
}