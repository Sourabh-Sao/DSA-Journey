#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& arr) {
    int n=arr.size();
    int count=0;
    int maxCount=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        while (i<n && arr[i]==1)
        {
            count++;
            i++;
        }
        maxCount=max(maxCount,count);
        count=0;
    }
    return maxCount;
}

int main(){
    vector<int>arr={1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(arr);
    return 0;
}