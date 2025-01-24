#include <bits/stdc++.h>
using namespace std;

string stringSum(string &num1, string &num2)
{

    int i = num1.size()-1;
    int j = num2.size()-1;

    string res = "";
    
    int carry = 0;

    while (i >= 0 || j >= 0 || carry != 0)
    {
        int ival = i >= 0 ? num1[i] - '0' : 0;
        int jval = j >= 0 ? num2[j] - '0' : 0;
        i--;
        j--;
        int sum = ival + jval + carry;
        res = to_string(sum % 10) + res;
        carry = sum / 10;
    }
    return res;
}

int main()
{
    string s1 = "5";
    string s2 = "21";

    cout << stringSum(s1, s2);
    // cout<<typeid(stringSum(s1,s2)).name();
    // cout<<stoi(s1);  //stoi(s) convert s from string to int
    // cout<<typeid(stoi(s1)).name();  //tells the datatype of any variable
    return 0;
}