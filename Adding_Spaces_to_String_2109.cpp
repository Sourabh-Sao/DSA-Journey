#include<bits/stdc++.h>
using namespace std;

string addSpaces(string s, vector<int>& spaces) {
    int n=s.size();
    string ans="";
    int i=0,j=0;
    while (i<n)
    {
        if (j<spaces.size() && i==spaces[j])
        {
            ans+=" ";
            j++;
        }
        ans+=s[i];
        i++;
        
    }
    return ans;
}

int main(){
    string s="LeetcodeHelpsMeLearn";
    vector<int>spaces={8,13,15};
    cout<<addSpaces(s,spaces);
    return 0;
}