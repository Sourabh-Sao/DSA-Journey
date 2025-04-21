#include <bits/stdc++.h>
using namespace std;

// solution 1 using hashing
int characterReplacement(string s, int k)
{
    unordered_map<char, int> hash;
    int r = 0;
    int l = 0;
    int maxfreq = 0;
    int maxlen = 0;
    while (r < s.size())
    {
        hash[s[r] - 'A']++;
        maxfreq = max(maxfreq, hash[s[r] - 'A']);
        if (maxlen - maxfreq >= k)
        {
            hash[s[l] - 'A']--;
            l++;
        }
        if (maxlen - maxfreq <= k)
        {
            maxlen = max(maxfreq, (r - l + 1));
        }
        r++;
    }

    return maxlen;
}

// solution 2 without using map
int characterReplacement(string s, int k) {
    int ans = 0, n = s.size();
    for(char c = 'A'; c <= 'Z'; c++)
    {
        int i = 0, j = 0, replaced = 0;
        while(j < n)
        {
            if(s[j] == c)
                j++;
            else if(replaced < k)
                j++, replaced++;
            else if(s[i] == c)
                i++;
            else
                i++, replaced--;
            ans = max(ans, j - i);
        }
    }
    return ans;
}

int main()
{
    string s = "ABAB";
    int k=2;
    cout<<characterReplacement(s,k);
    return 0;
}