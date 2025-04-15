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

// vector<int> findAnagrams(string s, string p) {
//     int n = s.size();
//     int m = p.size();
//     vector<int> ans;
//     vector<int> pCount(26, 0); // frequency array for p
//     for (char c : p) {
//         int index = c - 'a';
//         pCount[index]++;
//     }
//     for (int i = 0; i <= n - m; i++) {
//         vector<int> sCount(26, 0); // frequency array for s
//         for (int j = 0; j < m; j++) {
//             int index = s[i + j] - 'a';
//             sCount[index]++;
//         }
//         if (sCount == pCount) {
//             ans.push_back(i);
//         }
//     }
//     return ans;
// }


// Solution 3 Best 
bool isSame(int freq1[],int freq2[]){
    for (int i = 0; i < 26; i++)
    {
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}


vector<int> findAnagrams(string s, string p) {
    vector<int>ans;
    int m=p.size();
    int n=s.size();
    if(n < m) return ans;
    
    int freq1[26]={0};
    int freq2[26]={0};
    
    // We're iterating over the first m characters of both strings p and s and
    // updating the frequency arrays freq1 and freq2 accordingly.
    for(int i=0; i<m; i++){
        freq1[p[i]-'a']++;
        freq2[s[i]-'a']++;
    }
    
    for(int i=m; i<n; i++){
        if(isSame(freq1, freq2)){
            ans.push_back(i-m);
        }
        freq2[s[i]-'a']++;
        freq2[s[i-m]-'a']--;
    }
    
    if(isSame(freq1, freq2)){
        ans.push_back(n-m);
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
