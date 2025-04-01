#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    int n=s.size();
    unordered_map<char,int>mp;
    queue<int>q;
    for (int i = 0; i < n; i++)
    {
        if (mp.count(s[i])==0)
        {
            q.push(i);
        }
        mp[s[i]]++;

        while (!q.empty() && mp[s[q.front()]]>1)
        {
            q.pop();
        }
    }
    return q.empty()?-1:q.front();  
}

int main(){
    string s="level";
    cout<<firstUniqChar(s);
    return 0;
}