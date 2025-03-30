#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int> &arr)
{
    int n = arr.size();
    stack<int> s;
    vector<int> ans(n, 0);
    for (int i = 2 * n - 1; i >= 0; i--)
    {
        while (!s.empty() && arr[s.top()] <= arr[i % n])
        {
            s.pop();
        }
        if (s.empty())
        {
            ans[i % n] = -1;
        }
        else
        {
            ans[i % n] = arr[s.top()];
        }
        s.push(i % n);
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 3};
    vector<int> ans = nextGreaterElements(arr);
    for (auto val : ans)
    {
        cout << val << " ";
    }
    return 0;
}