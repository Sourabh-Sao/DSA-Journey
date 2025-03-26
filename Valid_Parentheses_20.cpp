#include<bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char>st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='(' || s[i]=='{' || s[i]=='[')  //opening
        {
            st.push(s[i]);
        }else {   //closing 
            if (st.size()==0)    // we are checking This is because if the 
            // stack is empty, it means we've encountered a closing bracket 
            // without a corresponding opening bracket.
            {
                return false;
            }
            // In the line if (st.top()==s[i]), you're comparing the top of the
            //  stack with the current character s[i]. However, this will not 
            // work correctly because s[i] is a closing bracket, and st.top() 
            // is an opening bracket.
            // You should compare st.top() with the corresponding opening bracket of s[i].

            if ((st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}')|| (st.top()=='[' && s[i]==']'))
            {
                st.pop();
            }else{
                return false;
            }
            
        }
        
    }
    return st.empty();
}

int main(){
    string s = "()";
    cout<<isValid(s);

    return 0;
}