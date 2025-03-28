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
    stack<int>s;
    vector<int>ans(n,0);
    for (int i = 0; i < n; i++)
    {
        // finding the previous high element of today and poping the smaller element
        while (s.size()>0 && price[s.top()]<=price[i])
        {
            s.pop();
        }

        // if stack is empty then ans[i] will be i+1 because there is no 
        // previous element
        if (s.empty())
        {
            ans[i]=i+1;
        }else{
            // if stack is not empty then ans[i] will be i-s.top() , i-s.top() 
            // is the distance between the current element and the previous high element
            ans[i]=i-s.top();
        }
        s.push(i);
    }
    
    for(int val:ans){
        cout<<val<<" ";
    }

    return 0;
}
