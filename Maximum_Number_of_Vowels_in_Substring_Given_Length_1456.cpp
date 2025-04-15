#include <bits/stdc++.h>
using namespace std;


bool isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int maxVowel(string s, int k)
{
    int n = s.length();
    if (n < k || k <= 0)
    {
        return 0; // Handle invalid input
    }

    int max_vowels = 0;
    int current_vowels = 0;

    
    for (int i = 0; i < k; ++i)
    {
        if (isVowel(s[i]))
        {
            current_vowels++;
        }
    }
    max_vowels = current_vowels;

    int i = 0, j = k;
    while (j < n)
    {
        
        if (isVowel(s[i]))
        {
            current_vowels--;
        }

        if (isVowel(s[j]))
        {
            current_vowels++;
        }
        max_vowels = max(max_vowels, current_vowels);
        i++, j++;
    }

    return max_vowels;
}



int main()
{
    string s = "abciiidef";
    int k = 3;
    cout << maxVowel(s, k);
    return 0;
}