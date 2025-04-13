#include <bits/stdc++.h>
using namespace std;


// sliding window approach withour hashing 
int countGoodSubstrings(string s) {
    int n=s.size();
    if (n==0 || n<3) return 0;

    int i=0,j=1,k=2;
    int count=0;
    while (k<n)
    {
        if (s[i]!=s[j] && s[j]!=s[k] && s[i]!=s[k])
        {
            count++;
            i++,j++,k++;
        }else{
            i++,j++,k++;

        }
        
    }
    return count;
}

int main() {
    string s="aababcabc";
    cout<<countGoodSubstrings(s);
    return 0;
}