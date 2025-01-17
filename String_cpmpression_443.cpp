#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &arr)
{
    int idx = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        char ch = arr[i];
        int count = 0;

        while (i < n && arr[i] == ch)
        {
            count++, i++;
        }
        if (count == 1)
        {
            arr[idx++] = ch;
        }
        else
        {
            arr[idx++] = ch;
            string str = to_string(count);
            for (char dig : str)
            {
                arr[idx++] = dig;
            }
        }
        i--;
    }
    arr.resize(idx);
    return idx;
}

int main()
{
    vector<char> ch = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress(ch);
    for (auto val : ch)
    {
        cout << val << " ";
    }
    return 0;
}