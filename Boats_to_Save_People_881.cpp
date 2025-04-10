#include <bits/stdc++.h>
using namespace std;

int numRescueBoats(vector<int>& arr, int limit) {
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int i=0,j=n-1;
    int count=0;
    while (i<=j)
    {
        if (arr[j]+arr[i]<=limit)
        {
            count++;
            i++,j--;
        }else{
            count++;
            j--;
        }
        
    }
    return count;
}

int main()
{
    vector<int>arr={3,5,3,4};
    int limit=5;
    cout<<numRescueBoats(arr,limit);

    return 0;
}