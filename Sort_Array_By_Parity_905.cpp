#include<bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParity(vector<int>& arr) {
    int n=arr.size();
    int st=0,end=n-1;
    
    while (st<end)
    {
        if (arr[st]%2==0) 
        {
            st++;
        }else if (arr[st]%2!=0 && arr[end]%2==0)
        {       //(arr[st]%2!=arr[end]%2)
            swap(arr[st],arr[end]);
            st++,end--;
        }else if(arr[st]%2!=0 && arr[end]%2!=0){
            end--;
        }
    }
    
    return arr;
}

int main(){
    vector<int>arr={3,1,2,4};
    sortArrayByParity(arr);

    for(auto val:arr){
        cout<<val<<" ";
    }
    return 0;
}