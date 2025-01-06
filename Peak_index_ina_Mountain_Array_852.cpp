#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int> arr){
    int st=0,end=arr.size()-1;
    while (st<=end)
    {
        int mid=st +(end-st)/2;
        if (arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
        {
            return mid;
        }else if(arr[mid]>arr[mid-1])
        {
            st=mid+1;
        }else{
            end=mid-1;
        }
        
    }
    return -1;
    
}

int main(){
    vector<int> arr={0,3,8,9,5,2};
    cout<<peakIndexInMountainArray(arr);
    return 0;
}