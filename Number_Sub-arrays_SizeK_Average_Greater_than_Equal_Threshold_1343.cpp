#include <bits/stdc++.h>
using namespace std;

int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    int n=arr.size();
    int i=0,j=0;
    int sum=0;
    int count=0;

    while (j<n)
    {
        sum+=arr[j];
        if (j-i+1<k)
        {
            j++;
        }else{
            if ((sum/k)>=threshold)
            {
                count++;
            }
            sum-=arr[i];
            i++,j++;
            
        }
        
    }
    return count;
}

int main() {
    vector<int>arr={1,1,1,1,1};
    int k=1;
    int threshold=0;
    cout<<numOfSubarrays(arr,k,threshold);
    return 0;
}