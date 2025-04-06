// Que
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity
// and use only constant extra space.

#include<iostream>
#include<vector>
using namespace std;

// another solution 
// int single(vector<int>&arr){
//     int n=arr.size();
//     unordered_map<int,int>m;

//     for (int i = 0; i < n; i++)
//     {
//         m[arr[i]]++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (m[arr[i]]==1)
//         {
//             return arr[i];
//         }
        
//     }
//     return -1;
// }

int unique(vector<int>arr){
    int ans=0;
    for(auto val:arr){
        ans^=val;
    }
    return ans;
}

int main(){
    vector<int> vec={1,2,4,2,1};
    cout<<unique(vec);


    return 0;
}
