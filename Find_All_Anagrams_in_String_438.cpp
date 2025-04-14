#include <bits/stdc++.h>
using namespace std;

// int index = c - 'a';
// pCount[index]++;

//*  solution 1 but TLE (self solved)
// vector<int>findAnagrams(string s, string p) {
//     int n=s.size();
//     int m=p.size();
//     sort(p.begin(),p.end());
//     vector<int>ans;
//     for (int i = 0; i < n; i++)
//     {
//         string str=s.substr(i,m);
//         sort(str.begin(),str.end());
//         if (str==p)
//         {
//             ans.push_back(i);
//         }

//     }

//     return ans;
// }

// Solution 2 with No TLE using

vector<int> findAnagrams(string s, string p) {
    int n = s.size();
    int m = p.size();
    vector<int> ans;
    vector<int> pCount(26, 0); // frequency array for p
    for (char c : p) {
        int index = c - 'a';
        pCount[index]++;
    }
    for (int i = 0; i <= n - m; i++) {
        vector<int> sCount(26, 0); // frequency array for s
        for (int j = 0; j < m; j++) {
            int index = s[i + j] - 'a';
            sCount[index]++;
        }
        if (sCount == pCount) {
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> ans = findAnagrams(s, p);
    for (auto val : ans)
    {
        cout << val << " ";
    }
    return 0;
}