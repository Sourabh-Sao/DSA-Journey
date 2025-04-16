#include <bits/stdc++.h>
using namespace std;

long long maximumSubarraySum(vector<int> &arr, int k)
{
    int n = arr.size();
    long long sum=0,maxSum=0;
    unordered_map<int,int>mp;
    int l=0;
    for (int r = 0; r < n; r++)
    {
        sum+=arr[r];
        mp[arr[r]]++;

        // agar window size bda h k se then remove last element
        if (r-l+1>k)
        {
            mp[arr[l]]--;
            if (mp[arr[l]]==0)
            {
                mp.erase(arr[l]);
            }
            sum-=arr[l];
            l++;
        }

        // agar widnow size k kr brabar h aur aur map size bhi k ke brabar h mtlb map se bhi 3 element h , agar map ka size k se less hota to jann jate ki koi duplicate h jiska count increase hua h. warna agar saare disticnt hote to map ka size k ke equal hota. 
        if (r-l+1==k && mp.size()==k)
        {
            maxSum=max(maxSum,sum);
        }
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {1, 5, 4, 2, 9, 9, 9};
    int k = 3;
    cout << maximumSubarraySum(arr, k);

    return 0;
}