#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main()
{
    vector<int> arr = {0, 1, 0, 3, 12};
    moveZeroes(arr);

    for (auto val : arr)
    {
        cout << val << " ";
    }
    return 0;
}