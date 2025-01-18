#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int temp=n; //store the original number
    int ans=0;
    if (n<0)  //negative number is not palindrome
    {
        return false;
    }
    
    while (n!=0)  //reverse the number
    { 
        int dig=n%10; //extract the last digit
        if (ans>INT_MAX/10 || ans<INT_MIN/10) //overflow condition
        {
            return 0;
        }
        ans=ans*10+dig;   
        n=n/10; //remove the last digit
    }
    
    return ans==temp; //check if the reversed number is equal to the original number
}

int main(){
    int n=1211;
    cout<<isPalindrome(n);
    return 0;
}