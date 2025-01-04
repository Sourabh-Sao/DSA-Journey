#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height){
    int maxWater=0;
    int lp=0,rp=height.size()-1;
    while (lp<rp)
    {
       int w=rp-lp;
       int ht=min(height[lp],height[rp]);
       int currwater=w*ht;
       maxWater=max(currwater,maxWater);
       height[lp]<height[rp] ? lp++:rp--;
    }
    return maxWater;
}


int main(){
    vector<int>arr={1,8,6,3,5,4,8,3,7};
    
    cout<<maxArea(arr);

    return 0;
}