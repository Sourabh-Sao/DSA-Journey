#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& arr, int val) {
    int n=arr.size();
    int i=0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j]!=val)
        {
            arr[i]=arr[j];
            i++;
        }
    }
    return i;
    
}

int main(){
    vector<int>arr={3,2,2,3};
    int val=3;
    cout<<removeElement(arr,val);
    return 0;
}