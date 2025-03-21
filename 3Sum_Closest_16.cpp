#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int closest = INT_MAX;
    int min_diff = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            int diff = abs(sum - target);

            if (diff < min_diff)
            {
                min_diff = diff;
                closest = sum;
            }

            if (sum == target)
                return target;
            else if (sum > target)
                k--;
            else
                j++;
        }
    }
    return closest;
}
int main()
{
    vector<int> arr = {-1, 2, 1, -4};
    int target = 1;
    cout<<threeSumClosest(arr,target);
    return 0;
}