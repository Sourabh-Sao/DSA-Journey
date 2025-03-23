#include<bits/stdc++.h>
using namespace std;

string mergeAlternately(string s1,string s2){
    string ans="";
    for (int i = 0; i < max(s1.length(),s2.length()); i++)
    {
        if(i<s1.length()) ans+=s1[i];
        if(i<s2.length()) ans+=s2[i];
    }
    return ans;
    
}
int main(){

    string s1="abc";
    string s2="pqr";
    cout<<mergeAlternately(s1,s2);
    return 0;
}