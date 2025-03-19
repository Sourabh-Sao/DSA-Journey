#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    int n=arr.size();
    int i=0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
        
    }
    return i+1;
}
int main(){
    vector<int>arr={0,0,1,1,1,2,2,3,3,4};
    // vector<int>arr={1,1,2};
    cout<<removeDuplicates(arr);
    return 0;
}