#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int,int>mp;
    int n=arr.size();
    for(auto val:arr){
        mp[val]++;
    }
    set<int>st;
    for(auto pair:mp){
        st.insert(pair.second);
    }
    return mp.size()==st.size();
}


int main()
{
    vector<int>arr={1,2,2,1,1,3};
    cout<<uniqueOccurrences(arr);
    return 0;
}