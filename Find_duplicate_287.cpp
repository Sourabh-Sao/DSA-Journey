#include <bits/stdc++.h>
using namespace std;

// using unordered_set
// but this is not the optimal solution , this is using extra space , but the question says that we should not use extra space
// int findDuplicate(vector<int> &arr)
// {

//     unordered_set<int> s;
//     for (auto val : arr)
//     {
//         if (s.find(val) != s.end())
//         {
//             return val;
//         }
//         s.insert(val);
//     }
//     return -1;
// }

// slow fast approach most optimal solution
int findDuplicate(vector<int> &arr)
{
    int slow=arr[0];
    int fast=arr[0];

    do  
    {
        slow=arr[slow];
        fast=arr[arr[fast]];
    } while (slow!=fast);

    slow=arr[0];  
    while (slow!=fast)  
    {
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
    
    
}



int main()
{
    vector<int> nums = {1, 3, 4, 2, 2};

    return 0;
}