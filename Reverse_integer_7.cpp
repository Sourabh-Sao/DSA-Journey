#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int revNum=0;

    while (n!=0)
    {
        int dig=n%10;
        if (revNum>INT_MAX/10 || revNum<INT_MIN/10)
        {
            return 0;
        }
        
        revNum=revNum*10+dig;
        n=n/10;
    }
    return revNum;
}

int main(){
    cout<<reverse(4356);

    return 0;
}