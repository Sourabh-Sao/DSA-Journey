#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    reverse(s.begin(), s.end());
}

int main(){

    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
    reverseString(str);



    // string str="hello";
    // int n=str.length();
    // uisng reverse()
    // reverse(str.begin(),str.end());
    // cout<<str;


    // using two-pointer loop and swap
    // int st=0,end=n-1;
    // while (st<end)
    // {
    //    swap(str[st],str[end]);
    //    st++,end--;
    // }
    // cout<<str;

    return 0;
}