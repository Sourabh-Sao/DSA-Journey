#include<bits/stdc++.h>
using namespace std;

// Solution 1
//  bool isAlphanumeric(char ch)
// {
//     if ((ch>='0' && ch<='9') || 
//     (tolower(ch)>='a' && tolower(ch)<='z'))
//     {
//         return true;
//     }
//     return false;
    
// }
//     bool isPalindrome(string s) {
//         int n = s.size();
//     int st = 0, end = n - 1;

//     while (st < end)
//     {
//         if (!isAlphanumeric(s[st])) //checking if start pointer the characters are alphanumeric or not
//         {
//             st++;
//             continue;
//         }
//         if (!isAlphanumeric(s[end])) //checking if end pointer the characters are alphanumeric or not
//         {
//             end--;
//             continue;
//         }
//         if (tolower(s[st]) != tolower(s[end]))  //checking if the characters are same or not
//         {
//             return false;  //if not same then return false
//         }
//         st++;
//         end--;
//     }
//     return true; 
//     }

// Solution 2
bool isPalindrome(string s){
    int n=s.length();
    int st=0,end=n-1;
    while (st<end)
    {
        if (!isalnum(s[st])){
            st++;
            continue; 
        }
        if (!isalnum(s[end])){
            end--;
            continue;
        }
        
        if(tolower(s[st])!=tolower(s[end])){
            return false;
        }
        st++,end--;
        
    }
    return true;
}

int main(){
    string s="racecar";
    cout<<isPalindrome(s);
    return 0;
}
