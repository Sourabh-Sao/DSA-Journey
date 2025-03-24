// Return Value
// The compare function returns an integer value indicating the relationship between the two substrings:

// Less than 0: The first substring is lexicographically less than the second substring.
// 0: The two substrings are equal.
// Greater than 0: The first substring is lexicographically greater than the second substring.

#include <bits/stdc++.h>
using namespace std;

//  better less TC 
string largestMerge(string s1, string s2) {
    string merged = "";
    int i = 0, j = 0;

    while (i < s1.length() && j < s2.length()) {
        // agar s1 bda h to usko ans me dalenege .other wise s2
        if (s1.compare(i, s1.length()-1, s2, j, s2.length()-1) > 0) {
            //  total 5 parameter . 
            // first parameter -  i is starting position of s1 , it tells from where we will start the compariosn  - kaha se compare krna shuru karenege
            //second parameter -  s1.length()-1(end) it tells kaha tak comapre krna h .  
            // third parameter - s2 kis string k sath compare krna h 
            // fourth parameter - j s2 string ka starting position , kaha se comparison shuru hoga.
            // fifth parameter - s2 string ko kaha tak compare krna h , agar end tak krna h toh s3,length-1. nahi to jaha tak krna h waha tak ka position . 
            merged += s1[i++];
        } else {
            merged += s2[j++];
        }
    }

    // Append remaining characters (if any)
    merged += s1.substr(i);
    merged += s2.substr(j);

    return merged;
}


// my code
// string largestMerge(string s1, string s2)
// {
//     int n = s1.size();
//     int m = s2.size();
//     string ans = "";
//     int i = 0, j = 0;

//     while (i < n && j < m)
//     {
//         if (s1.substr(i) > s2.substr(j))
//         {
//             ans += s1[i];
//             i++;
//         }
//         else
//         {
//             ans += s2[j];
//             j++;
//         }
//     }
//     ans += s1.substr(i);
//     ans += s2.substr(j);

//     return ans;
// }

int main()
{
    string s1 = "cabaa";
    string s2 = "bcaaa";

    cout << largestMerge(s1, s2);

    return 0;
}