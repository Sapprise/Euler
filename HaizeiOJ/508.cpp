/*************************************************************************
	> File Name: 508.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月07日 星期四 09时52分55秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int dp[2000];
int t[2000];

int main() {
    int n;
    cin >> n;
    t[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> t[i];
    }
    sort(t, t + n +1);
    dp[1] = t[1];
    dp[2] = t[2];
    for (int i = 3; i <= n; i++) {
        int a1, a2;
        a1 = dp[i - 1] + t[i] + t[1];
        a2 = dp[i - 2] + 2 * t[2] + t[1] + t[i];
        dp[i] = min(a1, a2);
    }
    cout << dp[n] << endl;
    return 0;
}
