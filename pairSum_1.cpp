#include<bits/stdc++.h>
using namespace std;

// bruteForce approach
// vector<int> pairSum(vector<int> num,int target){
//     vector<int>ans;
//     int n=num.size();
//     for (int i = 0; i < n; i++)
//     {
//         for ( int j = i+1; j < n; j++)
//         {
//             if (num[i]+num[j]==target)
//             {
//               ans.push_back(i);
//               ans.push_back(j);
//               return ans;
//             }
            
//         }
        
//     }
    
// }

// optimal approach (it is solved through two pointer approach)
vector<int>twoSum(vector<int>arr,int target){
    
    // pairing element with their indices
    vector<pair<int,int>>p;
    for (int i = 0; i < arr.size(); i++)
    {
        p.emplace_back(arr[i],i);
    }

    // sorting
    sort(p.begin(),p.end());

    // two pointer 

    int st=0,end=arr.size()-1;
    while (st<end)
    {
        int sum=p[st].first+p[end].first;
        if (sum==target)
        {
            return {p[st].second,p[end].second};
        }else if (sum>target)
        {
            end--;
        }else{
            st++;
        }
    }
    return {-1 ,-1};
    
    
}



int main(){
    vector<int> num={2,7,11,15};
    int target=26;
    vector<int>ans=twoSum(num,target);
    cout<<"("<<ans[0]<<","<<ans[1]<<")";
    
}