#include <bits/stdc++.h>
using namespace std;

void NextPermutation(vector<int> &arr)
{
    int pivot = -1, n = arr.size();

    // finding pivot
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i + 1] > arr[i])
        {
            pivot = i;
            break;
        }
    }

    if (pivot == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }

    // finding number greater then pivot ans sewapping them
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > arr[pivot])
        {
            swap(arr[pivot], arr[i]);
            break;
        }
    }

    // reversing the last part
    // reverse(arr.begin()+pivot+1,arr.end());

    int i = pivot + 1, j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++, j--;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};

    NextPermutation(arr);
    for (int val : arr)
    {
        cout << val << " ";
    }

    return 0;
}