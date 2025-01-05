#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> arr, int target)
{
    int n = arr.size();
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[st] <= arr[mid]) // this line is only for checking if left sorted
        {
            if (arr[st] <= target && target <= arr[mid]) // this line tell if target lie in left(in between of st and mid)
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= target && target <= arr[end]) // this tells target lie in right
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}


int main(){
    // [0,1,2,3,4,5,6,7] normal sorted array
    vector<int> arr={3,4,5,6,7,0,1,2}; //rotated sorted array
    int target=0;
    cout<<search(arr,target);

    return 0;
}
