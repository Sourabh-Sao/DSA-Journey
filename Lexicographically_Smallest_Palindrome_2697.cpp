#include<bits/stdc++.h>
using namespace std;

string makeSmallestPalindrome(string s) {
    int n = s.length();
    int left = 0;
    int right = n - 1;

    while (left < right) {
        if (s[left] < s[right]) {
            s[right] = s[left];
        } else if (s[right] < s[left]) {
            s[left] = s[right];
        }
        left++;
        right--;
    }
    return s;
}


int main(){
    string s="egcfe";
    cout << makeSmallestPalindrome(s) << endl; // Output: "efcfe"

    s = "abcd";
    cout << makeSmallestPalindrome(s) << endl; // Output: "abba"

    s = "seven";
    cout << makeSmallestPalindrome(s) << endl; // Output: "neven"
    
    s = "racecar";
    cout << makeSmallestPalindrome(s) << endl; // Output: "racecar"

    return 0;
}
