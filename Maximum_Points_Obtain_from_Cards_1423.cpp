#include<bits/stdc++.h>
using namespace std;

int maxScore(vector<int>& arr, int k) {
    int n=arr.size();

    int lsum=0;
    int rsum=0;
    int maxSum=0;

    // calculating sum of first k cards
    for(int i=0;i<k;i++){
        lsum+=arr[i];
    }

    maxSum=max(maxSum,lsum);
    
    int j=n-1;
    // after then removing first k element and adding last element
    // one by one
    for (int i = k-1; i>=0; i--)
    {
        lsum-=arr[i];
        rsum+=arr[j];
        maxSum=max(maxSum,lsum+rsum);
        j--;
    }
    return maxSum;
}


int main(){ 
    vector<int>arr={1,2,3,4,5,6,1};
    int k=3;
    cout<<maxScore(arr,k);
    return 0;
}