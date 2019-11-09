/*************************************************************************
	> File Name: 250.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月01日 星期二 20时42分12秒
 ************************************************************************/

#include<iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define MAX_N 10000000
long long s1[MAX_N + 5], s2[MAX_N + 5];

int main() {
    int n, t;
    long long ans = 0;
    cin >> n;
    t = n / 2;
    for (int i = 1; i <= n; i++) {
        cin >> s1[i];
        ans += s1[i];
    }
    ans /= n;
    for (int i = 1; i <= n; i++) {
        s1[i] -= ans;
    }
    for (int i = 1; i <= n; i++) {
        s2[i] = s2[i - 1] + s1[i];
    }
    sort(s2 + 1, s2 + 1 + n);
    ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += abs(s2[i] - s2[t]);
    }
    cout << ans << endl;
    return 0;
}
