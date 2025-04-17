#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n=s.size();
    set<char>st;
    int count=0,maxCount=0;

    int j=0;
    for (int i = 0; i < n; i++)
    {
        // agar duplicate mil gya to usko remove kr denge set , aur
        //  tab tak remove karenge jab tak unique nahi mil jate ya 
        // saare duplicate remove nahi ho jate. 
        while (st.count(s[i]))
        {
            st.erase(s[j]);
            j++;
        }
        st.insert(s[i]);
        // har baar bar unique string ka length nikal lenge right
        //  pointer - left pointer , 
        maxCount=max(maxCount,i-j+1);
    }
    return maxCount;
}



int main(){
    string s="abcabcbb";
    // cout<<lengthOfLongestSubstring(s);
    return 0;
}