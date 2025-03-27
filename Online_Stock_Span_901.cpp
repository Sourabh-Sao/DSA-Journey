#include<bits/stdc++.h>
using namespace std;


// code to sumbit on leetcode
// stack<int> s;
//     vector<int> prices;

// public:
//     StockSpanner() {}

//     int next(int price) {
//         prices.push_back(price);
//         while (!s.empty() && prices[s.top()] <= price) {
//             s.pop();
//         }

//         int ans = s.empty() ? prices.size() : prices.size() - 1 - s.top();
//         s.push(prices.size() - 1);
//         return ans;
//     }


int main(){
    vector<int>price={100,80,60,70,60,75,85};
    int n=price.size();
    vector<int>ans(n,0);
    stack<int>s;

    for (int i = 0; i < price.size(); i++)
    {
        while (s.size()>0 && price[s.top()]<=price[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            ans[i]=i+1;
        }else{
            ans[i]=i-s.top();

        }
        s.push(i);
        
    }
    
    for(int val:ans){
        cout<<val<<" ";
    }

    return 0;
}