#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=7;
    int currsum=0;
    int maxsum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum+=arr[i];
        maxsum=max(currsum,maxsum);
        cout<<currsum<<endl;
        if (currsum<0)
        {
            currsum=0;
        }
        
    }
    cout<<"max sum is = "<<maxsum;
    return 0;
}