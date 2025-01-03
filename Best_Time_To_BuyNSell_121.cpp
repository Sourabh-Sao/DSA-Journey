#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices,int n){
    int maxProfit=0,bestBuy=prices[0];
    for (int i = 1; i < n; i++)
    {
        if (prices[i]>bestBuy)
        {
           maxProfit=max(maxProfit,prices[i]-bestBuy);
        }
        
        bestBuy=min(bestBuy,prices[i]);
        
    }
    return maxProfit;
    
}

int main(){
    vector<int>arr={7,1,5,3,6,4};
    int n=arr.size();
    cout<<maxProfit(arr,n);


    return 0;
}