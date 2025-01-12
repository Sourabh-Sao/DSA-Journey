// This que is available in leetCode in the name of Sort Color
// Sort Colors
#include<bits/stdc++.h>
using namespace std;

void SortColor(vector<int>& arr){
    int n=arr.size();
    int low=0,mid=0,high=n-1;

    while (mid<=high)
    {
        if (arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            mid++,low++;
        }else if (arr[mid]==1)
        {
            mid++;
        }else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }

}

int main(){
    vector<int>arr={2,0,2,1,1,0};
    SortColor(arr);
    for(int val:arr){
        cout<<val<<" ";
    }

    return 0;
}