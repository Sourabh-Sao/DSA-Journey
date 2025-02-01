#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
vector<vector<int>> ThreeSum(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> ans;
    set<vector<int>> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> trip = {arr[i], arr[j], arr[k]}; // triplet ka vector bna liye
                    sort(trip.begin(), trip.end());              // fir sort kr diye jisse wo arrange ho jae jisse triplet ka koi bhi permutation bhi check ho jae

                    if (s.count(trip) == 0) // checking for uniquness - aagr set empty h to loop chalega aur agar koi unique triplet to loop chalega - agar set me koi triplet already h aur fir koi unique combination(number)wla triplet aata h to wo set me chala jayega mtlb loop chalega.
                    {
                        s.insert(trip);
                        ans.push_back(trip);
                    }

                    // ans.push_back({arr[i],arr[j],arr[k]});  // agar aase hi store kra denge to duplicate triplet bhi store ho jayenge .Uniquness nahi rhegi.
                }
            }
        }
    }
    return ans;
}

// two pointer approach
vector<vector<int>> threeSum(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])  // if value i is same as value i-1 then skip 
            continue;

        int j = i + 1, k = n - 1; // these are my two pointers

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                ans.push_back({arr[i], arr[j], arr[k]});
                j++, k--;
                while (j < k && arr[j] == arr[j - 1])  // if value j is same as value j-1 then skip(j++)
                {
                    j++;
                }
            }
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}