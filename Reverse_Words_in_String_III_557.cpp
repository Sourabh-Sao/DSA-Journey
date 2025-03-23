#include <bits/stdc++.h>
using namespace std;

string reverse(string s){
    int n=s.size();
    string ans="";

    for(int i=0; i<s.size(); i++){   //extracting word
        string word="";  
        while (i<n && s[i]!= ' ')    //getting single character
        {
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());  //reversing the word
        if (word.length()>0)   //checking if word is valid and not empty
        {
            ans+=" "+word;  //adding word to ans
        } 
    }
    return ans.substr(1);   //substring ans from 1 because 
    // we have  already added 1 white space at 
    // first to remove this we create a substring
}


int main()
{
    string s = "the pen";
    string ans=reverse(s);
    cout<<ans;

    return 0;
}