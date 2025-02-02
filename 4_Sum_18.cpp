#include <bits/stdc++.h>
using namespace std;

// 4 sum
// two pointer approach
vector<vector<int>> fourSum(vector<int> arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>>ans;
    for (int i = 0; i < n; i++)
    {
        if(i>0 && arr[i]==arr[i-1]) continue;   //checking duplicate for i
        for (int j = i+1; j < n; j++)
        {
            if(j>i+1 && arr[j]==arr[j-1]) continue;  //checking duplicate for j

            int p=j+1,q=n-1;
            while (p<q)
            {
                long long sum=(long long)arr[i]+(long long)arr[j]+(long long)arr[p]+(long long)arr[q];
                if (sum>target)
                {
                    q--;
                }else if(sum<target){
                    p++;
                }else{
                    
                    ans.push_back({arr[i],arr[j],arr[p],arr[q]});
                    while (p<q && arr[p]==arr[p+1])  //checking duplicate for p 
                    {
                        p++;
                    }
                    while (p<q && arr[q]==arr[p-1]) //checking duplicate for q 
                    {
                        q--;
                    }
                    
                    p++,q--;
                }
                
            }
            
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2,2,2,2,2};
    int target = 8;
    vector<vector<int>> ans = fourSum(arr, target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
