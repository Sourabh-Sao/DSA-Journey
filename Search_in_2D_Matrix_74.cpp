#include<bits/stdc++.h>
using namespace std;


// finding the target in a row
bool searchInRow(vector<vector<int>>mat,int target,int row){
    int n=mat[0].size();  // 
    int st=0,end=n-1;

    while (st<=end)
    {
        int mid=st+(end-st)/2;
        if (target==mat[row][mid])
        {
            return true;
        }else if(target>mat[row][mid]){
            st=mid+1;
        }else {
            end=mid-1;
        }
        
    }
    return false;
}


// finding the row where target lie
bool searchMatrix(vector<vector<int>>&mat,int target){
    // binary search on total number of rows

    int m=mat.size(); //size of  whole matrix i.e. number of rows
    int n=mat[0].size(); //size of 1 column 
    int startRow=0,endRow=m-1;

    while (startRow<=endRow)
    {
        int midRow=startRow+(endRow-startRow)/2;

        //finding if target lie in the range of row(finding row where target lie)
        if (target>= mat[midRow][0] && target<=mat[midRow][n-1]) 
        {
            return searchInRow(mat,target,midRow);
        }else if(target>mat[midRow][n-1]){
            startRow=midRow+1;  //if target is greater than last element of row then we will move to next row
        }else{
            endRow=midRow-1;  //if target is smaller than last element of row then we will move to previous row
        }
        
    }
    return false;
}

int main() {
    vector<vector<int>>mat={{1,2,3},{4,5,6,},{7,8,9}};
    int target=5;
    cout<<searchMatrix(mat,target)<<endl;
}           