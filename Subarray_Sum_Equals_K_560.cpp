#include<bits/stdc++.h>
using namespace std;


// BruteForce Approach
// int subArray(vector<int>arr,int target){

//     int count=0;
//     int n=arr.size();
//     for (int i = 0; i < n; i++)  //starting point
//     {
//         int sum=0;
//         for (int j = i; j < n; j++)
//         {
//             sum+=arr[j];
//             if(sum==target){
//                 count++;
//             }
//         }
        
//     }
    
//     return count;
    
// }
int subArray(vector<int> arr, int k)
{
    int n = arr.size();
    vector<int> ps(n, 0);
    ps[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + arr[i];
    }

    int count = 0;
    unordered_map<int, int> m;
    for (int j = 0; j < n; j++)
    {
        if (ps[j] == k)
            count++;

        int val = ps[j] - k;
        if (m.count(val) > 0)
        {
            count += m[val];
        }
        m[ps[j]]++;
    }

    return count;
}
int main(){
    vector<int>arr={1,1,1};
    int k=2;
    cout<<subArray(arr,k);

    return 0;
}