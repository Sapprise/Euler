/*************************************************************************
	> File Name: 510.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月07日 星期四 10时22分25秒
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

int f[10005][2];
int dp[10005];
priority_queue <int, vector<int>, less<int> > q;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> f[i][0] >> f[i][1];
    }
    dp[2] = f[2][0] + f[1][1];
    q.push((f[2][0] - f[2][1]));
    for (int i = 4; i <= n; i += 2) {
        int a1, a2;
        a1 = dp[i - 2] + f[i][0] + f[i - 1][0] - q.top();
        a2 = dp[i - 2] + f[i][0] + f[i - 1][1];
        if (a1 < a2) {
            dp[i] = a1;
            q.pop();
            q.push((f[i][0] - f[i][1]));
            q.push((f[i - 1][0] - f[i - 1][1]));
        } else {
            dp[i] = a2;
            q.push((f[i][0] - f[i][1]));
        }
    }
    cout << dp[n] << endl;
    return 0;
}
