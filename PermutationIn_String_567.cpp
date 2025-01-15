#include <bits/stdc++.h>
using namespace std;

// sliding window approach
// -------------------------------------

// bool isfreqSame(int freq1[],int freq2[]){
//     for (int i = 0; i < 26; i++)
//     {
//         if (freq1[i]!=freq2[i])
//         {
//             return false;
//         }
        
//     }
    
// }

// bool checkInclusion(string s1,string s2){
//     int freq[26]={0};

//     for (int i = 0; i < s1.length(); i++)
//     {
//     freq[s1[i]-'a']++;
//     }
//     int windSize=s1.length();

//     for (int i = 0; i < s2.length(); i++)
//     {
//         int windIdx=0,idx=i;
//         int windFreq[26]={0};

//         while (windIdx<windSize && idx<s2.length())
//         {
//             windFreq[s2[idx]-'a']++;
//             windIdx++,idx++;
//         }
//         if (isfreqSame(freq,windFreq))
//         {
//             return true;
//         }
        
        
//     }
//     return false;
// }



// -----------------------------------


// substr approach
// ------------------------------------
bool solve(string s,string s1){
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    return s==s1;
}

bool checkInclusion(string s1,string s2){
    int n1=s1.size(); 
    int n2=s2.size();
    int i=0;
    while (i<=n2)
    {
        string s=s2.substr(i,s1.length());
        if (solve(s,s1))
        {
            return 1;
        }
        i++;
        
    }
    return 0;
}
// ----------------------------------------------

int main()
{
    string s1 = "ab";
    string s2 = "eidboao";
    cout<<checkInclusion(s1,s2);
    // cout<<s1.size();
    // cout<<s2.length();

    return 0;
}