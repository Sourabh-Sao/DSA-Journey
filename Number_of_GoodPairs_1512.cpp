#include<bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int>& arr) {
    int res = 0;
    unordered_map<int, int> count;
    for (int a: arr) {
        res += count[a]++;
    }
    return res;
}

int main(){
    vector<int>arr={};
    cout<<numIdenticalPairs(arr);
    return 0;
}