#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> arr)
{
    int count = 0;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            count++;
        }
    }

    // return count<=1;
    if (count <= 1)
    {
        return true;
    }
    return false;
}

int main()
{
    // vector<int> arr = {3,4,5,1,2};
    // vector<int> arr = {2,1,3,4};
    vector<int> arr = {1, 2, 3};
    cout << check(arr);

    return 0;
}