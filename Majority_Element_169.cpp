#include<iostream>
#include<vector>
using namespace std;
// most optimal approach
// AKA Moore's voting Algorihtm
int majorityElement(vector<int> num){
    int freq=0,ans=0;
    for (int i = 0; i < num.size(); i++)
    {
        if (freq==0)
        {
            ans=num[i];
        }
        if (ans==num[i])
        {
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

int main(){
     vector<int> arr={1,2,2,1,1,2,2,2};
    int res=majorityElement(arr);
    cout<<res;
    

    return 0;
}