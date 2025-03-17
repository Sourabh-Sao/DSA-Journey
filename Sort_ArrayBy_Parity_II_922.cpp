#include<bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParityII(vector<int>& arr) {
    int n=arr.size();
    int i=0,j=1;
    
    while (i<n && j<n)
    {
        if(arr[i]%2==0){
            i+=2;
        }else if(arr[j]%2==1){
            j+=2;
        }else {
            swap(arr[i],arr[j]);
        }
    }
    return arr;
    
}
int main(){
    vector<int>arr={4,2,5,7};
    sortArrayByParityII(arr);

    for(auto val:arr){
        cout<<val<<" ";
    }
    return 0;
}