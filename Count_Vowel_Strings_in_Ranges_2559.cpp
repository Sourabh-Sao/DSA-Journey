#include <bits/stdc++.h>
using namespace std;

// vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
// {
//     set<char> vowel_set = {'a', 'e', 'i', 'o', 'u'};
//     vector<int> prefix_cnt(words.size() + 1, 0);
//     int prev = 0;
//     for (int i = 0; i < words.size(); i++)
//     {
//         if (vowel_set.count(words[i][0]) && vowel_set.count(words[i][words[i].size()-1]))
//         {
//             prev++;
//         }
//         prefix_cnt[i + 1] = prev;
//     }
//     vector<int> ans; 
//         for (auto& query : queries) {
//             int L = query[0], R = query[1];  
//             ans.push_back(prefix_cnt[R + 1] - prefix_cnt[L]);  
//         }
//     return ans;
// }


vector<int>vowelString(vector<string>& s, vector<vector<int>>queries){
    int n=s.size();
    set<char>vowel={'a','e','i','o','u'};

    int count=0;
    vector<int>prefixCount(n+1,0);

    for (int i = 0; i < n; i++)
    {
        if (vowel.count(s[i][0]) && vowel.count(s[i][s[i].size()-1]))
        {
            count++;
        }
        prefixCount[i+1]=count;   
    }

    vector<int>ans;
    for (int i = 0; i < queries.size(); i++)
    {
        int l=queries[i][0],r=queries[i][1];
        ans.push_back(prefixCount[r+1]-prefixCount[l]);

    }
    return ans;
}

int main()
{   
    vector<string>s={"aba","bcb","ecef","aa","e"};
    vector<vector<int>>queries={{0,2},{1,4},{1,1}};
    vector<int>ans=vowelString(s,queries);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    


    return 0;
}