// this direct question is not available on leetcode but its variation is there

#include<bits/stdc++.h>
using namespace std;

int merge(vector<int>&arr,int st,int mid,int end){
    vector<int>temp;
    int i=st,j=mid+1;
    int count=0;

    while (i<=mid && j<=end)
    {
        if (arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            count+=(mid-i+1);
        }
        
    }

    while (i<=mid) 
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j<=end) 
    {
        temp.push_back(arr[j]);
        j++;
    }
    
    for (int i = 0; i < temp.size(); i++)
    {
        arr[st+i]=temp[i];
    }
    
    return count;
}

int mergeSort(vector<int>&arr,int st,int end){
    if (st<end)
    {
        int mid=st+(end-st)/2;

        int leftCount=mergeSort(arr,st,mid);  //left

        int rightCount=mergeSort(arr,mid+1,end); //right

        int invCount=merge(arr,st,mid,end);

        return leftCount+rightCount+invCount;
    }
    
    return 0;
    
}
int main(){
    vector<int>arr={6,3,5,2,7};
    cout<<mergeSort(arr,0,arr.size()-1);
    return 0;
}