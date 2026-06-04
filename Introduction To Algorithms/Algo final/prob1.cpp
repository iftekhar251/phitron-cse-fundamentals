#include <bits/stdc++.h>
using namespace std;

int recur(int n, vector<int>& dp) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (n == 3) return 2;
    
    if (dp[n] != -1) return dp[n];
    
    return dp[n] = recur(n-1, dp) + recur(n-2, dp) + recur(n-3, dp) + recur(n-4, dp);
}

int tetranacci(int n) {
    vector<int> dp(n+1, -1);
    return recur(n, dp);
}

int main() {
    int n;
    cin >> n;
    cout << tetranacci(n) << endl;
    return 0;
}