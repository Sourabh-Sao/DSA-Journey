#include<bits/stdc++.h>
using namespace std;

// less time
// int bestClosingTime(string customers) {
//     int n = customers.size();
//     int score = 0,maxscore =0 ,idx = -1;

//     for(int i=0;i<n;i++){
//         if(customers[i] == 'Y') score++;
//         else score--;

//         if(score > maxscore){
//             maxscore = score;
//             idx = i;
//         }
//     }

//     return idx + 1;
// }


// easy but take some more time than above solution  
int bestClosingTime(string customers) {
    int n = customers.length();
        vector<int> prefix_n(n + 1, 0);
        vector<int> postfix_y(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        prefix_n[i] = prefix_n[i - 1];
        if (customers[i - 1] == 'N') {
            prefix_n[i]++;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        postfix_y[i] = postfix_y[i + 1];
        if (customers[i] == 'Y') {
            postfix_y[i]++;
        }
    }

    int min_penalty = INT_MAX;
    int idx = 0;

    for (int i = 0; i <= n; i++) {
        int penalty = prefix_n[i] + postfix_y[i];
        if (penalty < min_penalty) {
            min_penalty = penalty;
            idx = i;
        }
    }

    return idx;
}

int main(){
    string s="YYNY";
    cout<<bestClosingTime(s);


    return 0;
}