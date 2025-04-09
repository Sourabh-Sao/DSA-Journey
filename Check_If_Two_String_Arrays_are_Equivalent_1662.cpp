#include<bits/stdc++.h>
using namespace std;
// solution 1
// bool arrayStringsAreEqual(vector<string>& s1, vector<string>& s2) {
    
//     string ans1="";
//     string ans2="";

//     for (int i = 0; i < max(s1.size(),s2.size()); i++)
//     {
//         if (i<s1.size())
//         {
//             ans1+=s1[i];
//         }
//         if (i<s2.size())
//         {
//             ans2+=s2[i];
//         }
        
//     }
//     return ans1==ans2;
// }

// solution 2
bool arrayStringsAreEqual(vector<string>& s1, vector<string>& s2) {
    string ans1, ans2;
    for (auto& str : s1) ans1 += str;
    for (auto& str : s2) ans2 += str;
    return ans1 == ans2;
}

int main(){
    vector<string>s1={"ab", "c"};
    vector<string>s2={"a", "bc"};
    cout<<arrayStringsAreEqual(s1,s2);
    return 0;
}