#include <bits/stdc++.h>
using namespace std;

int sumOfUnique(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> mp;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] == 1)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{
    vector<int> arr = {1, 2, 3, 2};
    cout << sumOfUnique(arr);
    return 0;
}