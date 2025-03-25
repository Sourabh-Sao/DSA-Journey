#include<bits/stdc++.h>
using namespace std;

// 0 white , 1 black
// all black at last and white at first

// this code pushes every 1 to end
// long long minimumSteps(string s) {
//     int n=s.length();
//     long long count=0;
    
//     int i=0;
//     int j=n-1;
//     while (i<j)
//     {
//         while (i<j && s[i]!='1')
//         {
//             i++;
            
//         }
        
//         while (i<j && s[j]!='0')
//         {
//             j--;
//         }
//         // swap(s[i],s[j]);
//         // count++;
//         if (i<j)
//         {
//             swap(s[i],s[j]);
//             count++;
//         }
        
//     }
    
//     return count;
// }


// solution 1
// long long minimumSteps(string s) {
    //     long long swap = 0;
    //     int black = 0; 
    //     for (int i = 0; i < s.length(); i++) {
        //         if (s[i] == '0') 
//             swap += (long long) black; 
//         else
//             black++; 
//     }
//     return swap;
// }

// solution 2
long long minimumSteps(string s) {
    long long ans=0, c=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1') c++;
        else ans+=c; 

    }
    return ans;
}


int main(){
    // string s="101";
    // string s="100";
    string s="1111110000000000000000000000000000000000001011";
    cout<<minimumSteps(s);
    return 0;
}