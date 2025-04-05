#include<bits/stdc++.h>
using namespace std;

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

int romanToInt(string s){
    int n=s.size();
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='I')
        {
            if (i<n && s[i+1]=='V' || s[i+1]=='X')
            {
                ans-=1;
            }else{
                ans+=1;
            }
            
        }
        else if(s[i]=='X'){
            if (i<n && s[i+1]=='L' || s[i+1]=='C')
            {
                ans-=10;
            }else{
                ans+=10;
            }
        }
        else if(s[i]=='C'){
            if(i<n && s[i+1]=='D' || s[i+1]=='M'){
                ans-=100;
            }else{
                ans+=100;
            }
        }
        else if(s[i]=='V')ans+=5;
        else if(s[i]=='L')ans+=50;
        else if(s[i]=='D')ans+=500;
        else if(s[i]=='M')ans+=1000; 
    }
    return ans;
}



int main(){

    string s="MCMXCIV";
    cout<<romanToInt(s);

    return 0;
}