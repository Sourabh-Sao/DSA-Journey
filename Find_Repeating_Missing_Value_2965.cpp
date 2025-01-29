#include<bits/stdc++.h>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int>s;
        vector<int>ans;
        int n=grid.size();

        int repeating=0,missing=0;

        int expSum=0,actualSum=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                    actualSum+=grid[i][j];
                if(s.count(grid[i][j])){
                    repeating=grid[i][j];
                    ans.push_back(repeating);

                }
                s.insert(grid[i][j]);
            }
        }
        expSum= (n*n) * (n*n+1)/2;
        missing=expSum + repeating - actualSum;

        ans.push_back(missing);

        return ans;
    }   
int main(){
    
    vector<vector<int>>grid={{1,3},{2,2}};
    vector<int>ans=findMissingAndRepeatedValues(grid);
    cout<<ans[0]<<" "<<ans[1];

    return 0;
}