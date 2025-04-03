#include<bits/stdc++.h>
using namespace std;

// Solution using Two pointers
// int majority(vector<int>&arr){
//     int n=arr.size();
//     if (n==1) return arr[0];
//     sort(arr.begin(),arr.end());
//     int i=0;
//     for (int j = 1; j < n; j++)
//     {
//         int count=1;
//         while (j<n && arr[i]==arr[j])
//         {
//             count++,j++;
//         }
//         if (count>n/2)
//         {
//             return arr[i];
//         }
//         i=j;
//     }
//     return -1;
// }

// most optimal approach
// AKA Moore's voting Algorithm
int majorityElement(vector<int> num){
    int freq=0,ans=0;
    for (int i = 0; i < num.size(); i++)
    {
        if (freq==0)
        {
            ans=num[i];
        }
        if (ans==num[i])
        {
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

int main(){
     vector<int> arr={1,2,2,1,1,2,2,2};
    int res=majorityElement(arr);
    cout<<res;
    

    return 0;
}
