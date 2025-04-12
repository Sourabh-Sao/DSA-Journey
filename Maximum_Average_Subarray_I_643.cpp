#include <bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& arr, int k) {
    int n = arr.size();
    if (k > n || k == 0) {
        return 0.0;
    }

    double maxSum = INT_MIN;
    double curr = 0;
    int i = 0, j = 0;

    while (j < n) {
        curr += arr[j];
        if (j - i + 1 < k) {
            j++;
        } else if (j - i + 1 == k) {
            maxSum = max(maxSum, curr);
            curr -= arr[i];
            i++, j++;
        }
    }
    return maxSum / k;
}


int main()
{
    vector<int>arr={1,12,-5,-6,50,3};
    int k=4;
    cout<<findMaxAverage(arr,k);
    return 0;
}