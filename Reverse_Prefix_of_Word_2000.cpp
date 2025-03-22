#include<bits/stdc++.h>
using namespace std;

string reversePrefix(string word, char ch) {
    int a=word.find(ch);
    if (a!=0)
    {
        reverse(word.begin(),word.begin()+a+1);
        return word;
        
    }
    return word;
}

int main(){
    string word="abcdefd";
    char ch='d';
    string ans=reversePrefix(word,ch);
    cout<<ans;
    
    return 0;
}