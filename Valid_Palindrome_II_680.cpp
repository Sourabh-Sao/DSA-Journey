#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    string copy=s;
    reverse(s.begin(),s.end());
    return copy==s;
}

bool validPalindrome(string s) {
    int n=s.length();
    int st=0,end=n-1;

    while (st<end)
    {
        if (s[st]==s[end])
        {
            st++,end--;
        }else{
            // We start at position st+1
            // We need characters from st+1 to end inclusive
            // The length is end-(st+1)+1 = end-st
            
            // We start at position st
            // We need characters from st to end-1 inclusive
            // The length is (end-1)-st+1 = end-st
            return isPalindrome(s.substr(st+1,end-st)) || isPalindrome(s.substr(st,end-st));
        }
        
    }
    return true;
}

int main(){
    // string s="abca";
    string s="eccer";
    cout<<validPalindrome(s);
    return 0;
}