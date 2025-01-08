#include <iostream>
#include <vector>
using namespace std;

int singleNoDuplicate(vector<int> &arr)
{
    int n=arr.size();

    if(n==1)return arr[0];  //edge case

    int st=0,end=n-1;

    while (st<=end)
    {
        int mid=st+(end-st)/2;

        if (mid==0 && arr[0]!=arr[1]) return arr[mid]; //if 2 element are there

        if (mid==n-1 && arr[n-1]!=arr[n-2]) return arr[mid]; 
        
        if (arr[mid-1]!=arr[mid] && arr[mid+1]!=arr[mid]) return arr[mid];
        
        if (mid%2==0) //even case
        {
            if (arr[mid-1]==arr[mid])   //match with previous moving left
            {
               end=mid-1;   
            }else{   //moving right
                st=mid+1;  
            }
            
        }else{  //odd case
            if (arr[mid-1]==arr[mid])  //match with previous moving right
            {
                st=mid+1; 
            }else{        //moving left
                end=mid-1; 
            }
            
        }
        
        
    }
    return -1;
}

int main(){
    vector<int> arr={1,1,2,3,3,4,4,8,8};
    cout<<singleNoDuplicate(arr);
    return 0;
}