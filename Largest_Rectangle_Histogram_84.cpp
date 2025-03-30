#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n=heights.size();
    stack<int>s;
    vector<int>Left(n,0);
    vector<int>Right(n,0);

    // calculating right smaller

    for (int i = n-1; i >= 0; i--)
    {
        while (!s.empty() && heights[s.top()]>=heights[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            Right[i]=n;
        }else{
            Right[i]=s.top();
        }
        s.push(i);
    }
    
    // removing the stack element before using it again 
    while (!s.empty())
    {
        s.pop();
    }
    
    // calculating left smaller
    for (int i =0; i<n; i++)
    {
        while (!s.empty() && heights[s.top()]>=heights[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            Left[i]=-1;
        }else{
            Left[i]=s.top();
        }
        s.push(i);
    }

    // calculating the area 
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        int width=Right[i]-Left[i]-1;
        int curr=heights[i]*width;
        ans=max(curr,ans);
    }
    return ans;
}


int main(){
    vector<int>arr={2,1,5,6,2,3};
    cout<<largestRectangleArea(arr);
    return 0;
}