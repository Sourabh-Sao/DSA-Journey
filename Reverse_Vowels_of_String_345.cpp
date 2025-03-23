#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

string reverseVowels(string s)
{
    int st = 0, end = s.size();

    while (st < end)
    {
        while (st < end && !isVowel(s[st]))
            st++;
        while (st < end && !isVowel(s[end]))
            end--;

        if (st < end)
        {
            swap(s[st], s[end]);
            st++, end--;
        }
    }
    return s;
}

int main()
{
    string s = "IceCreAm";
    // AceCreIm
    cout << reverseVowels(s);
    return 0;
}