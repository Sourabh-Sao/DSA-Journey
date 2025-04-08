#include<bits/stdc++.h>
using namespace std;
// solution 1
string check(string &s){
    string ans="";
    for(auto val:s){
        if (val=='#') 
        {
            if(!ans.empty()){
                ans.pop_back();
            }
        }else{
            ans+=val;
        }
        
    }
    return ans;
}
bool backspaceCompare(string s, string t) {
    return check(s)==check(t);
}

int main(){
    string s="ab#c";
    string t="ad#c";
    cout<<backspaceCompare(s,t);
    return 0;
}