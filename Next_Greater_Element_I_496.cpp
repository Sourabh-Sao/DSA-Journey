#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr1, vector<int>& arr2) {
    stack<int>s;
    unordered_map<int,int>m;
    for(int i=arr2.size()-1;i>=0;i--){
        while(s.size()>0 && s.top()<=arr2[i]){
            s.pop();
        }
        if(s.empty()){
            m[arr2[i]]=-1;
        }else{
            m[arr2[i]]=s.top();
        }
        s.push(arr2[i]);
    }
    vector<int>ans;
    for(int i=0;i<arr1.size();i++){
        ans.push_back(m[arr1[i]]);
    }
    return ans;
}

int main(){
    // leetcode part
    vector<int>num1={4,1,2};
    vector<int>num2={1,3,4,2};
    vector<int>ans=nextGreaterElement(num1,num2);
    for(auto val:ans){
        cout<<val<<" ";
    }

    // code to find next greater element
    vector<int>arr={6,8,0,1,3};
    int n=arr.size();
    stack<int>s;
    vector<int>ans(n,0);

    for(int i=n-1;i>=0;i--){
        while (s.size()>0 && s.top()<=arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ans[i]=-1;
        }else{
            ans[i]=s.top();
        }
        s.push(arr[i]);
        
    }
    for(auto val:ans){
        cout<<val<<" ";
    }
    return 0 ;
}