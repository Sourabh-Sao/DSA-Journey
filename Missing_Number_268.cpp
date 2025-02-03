#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&arr){
    int n=arr.size();

    int expSum=0;
    int actualSum=0;
    for (int i = 0; i < n; i++)
    {
        actualSum+=arr[i];
    }
    expSum=n*(n+1)/2;
    int missingNum=expSum-actualSum;
    return missingNum;
}


int main(){
    vector<int>arr={3,0,1};
    cout<<missingNumber(arr);
    return 0;
}