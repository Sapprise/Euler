/*************************************************************************
	> File Name: 492.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月22日 星期二 20时48分12秒
 ************************************************************************/

#include<iostream>
using namespace std;

int flage[30];

int main() {
    int n, ans = 0;
    cin >> n;
    flage[0] = 0, flage[1] = 1;
    for (int i = 2; i <= n; i++) {
        flage[i] = flage[i - 1] * 2;
    }
    if (n % 2) {
        for (int i = 1; i <= n - 2; i += 2) {
            ans += flage[(n - i) / 2];
        }
    } else {
        for (int i = 0; i <= n - 2; i += 2) {
            ans += flage[(n - i) / 2];
        }
    }
    cout << ans << endl;
    return 0;
}
