#include<bits/stdc++.h> 
using namespace std;

bool searchMatrix(vector<vector<int>>&mat,int target){
    int m=mat.size();  //matrix size
    int n=mat[0].size();  //column size

    int r=0,c=n-1;  //starting from top right corner

    while (r<m && c>=0){
        if (mat[r][c]==target)
        {
            return true;
        }else if(target>mat[r][c]){   //if target is greater than top right corner element then we will move to next row
            r++;
        }else{   //if target is smaller than top right corner element then we will move to previous column
            c--; 
        }
        
    }
    return false;
    
}


int main(){
    vector<vector<int>>mat={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target=5;
    cout<<searchMatrix(mat,target)<<endl;
    return 0;
}