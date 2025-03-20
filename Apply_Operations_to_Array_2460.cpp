#include <bits/stdc++.h>
using namespace std;

vector<int> applyOperations(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] == arr[j])
        {
            arr[i] *= 2;
            arr[j] = 0;
            i++;
        }
        else
        {
            i++;
        }
    }

    // one way to move zero to end
    int count=0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[count]);
            count++;
        }
    }

    // second way to move zero to the end

    // vector<int>ans;
    // int count=0;
    // for (int j = 0; j < n; j++)
    // {
    //     if (arr[j]!=0)
    //     {
    //         ans.push_back(arr[j]);
    //     }
    //     else{
    //         count++;
    //     }

    // }
    // for (int j = 0; j < count; j++)
    // {
    //     ans.push_back(0);
    // }
    // return ans;

    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 0};
    vector<int> ans = applyOperations(arr);

    for (auto val : ans)
    {
        cout << val << " ";
    }
    return 0;
}