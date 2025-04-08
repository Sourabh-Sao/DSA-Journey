#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string &s){
    string copy=s;
    reverse(s.begin(),s.end());
    return copy==s;
}

string firstPalindrome(vector<string>& s) {
    int n=s.size();

    for (int i = 0; i < n; i++)
    {
        if (ispalindrome(s[i]))
        {
            return s[i];
        }
        
    }
    return "";
}

int main(){
    vector<string>s={"abc","car","ada","racecar","cool"};
    string ans=firstPalindrome(s);
    cout<<ans;
    return 0;
}