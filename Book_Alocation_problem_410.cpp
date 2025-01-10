#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>arr,int n,int m,int maxAllowedPages){

    int std=1,page=0;
    for (int i = 0; i < n; i++)
    {
       if (arr[i]>maxAllowedPages)
       {
            return false;
       }
       if(page+arr[i]<=maxAllowedPages){
            page+=arr[i];
       }else{
        std++;
        page=arr[i];
       }
       
    }
    

    return std>m?false : true;
}

int allocateBook(vector<int>arr,int m)
{
    int n=arr.size();
    int ans=-1;
    int sum=0;

    if (m>n)
    {
        return -1;
    }
    
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }


    int st=0,end=sum;  //range 
    
    while (st<=end)
    {
        int mid=st+(end-st)/2;

        if (isValid(arr,n,m,mid)) //valid
        {
            ans=mid;
            end=mid-1;
        }else{                  //invalid
            st=mid+1;
        }
        
    }
    
    return ans;
}
int main(){
    vector<int> arr={2,1,3,4};
    int n=4,m=2;
    cout<<allocateBook(arr,m)<<endl;

    return 0;
}