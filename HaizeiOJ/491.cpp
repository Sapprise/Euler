/*************************************************************************
	> File Name: 491.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月22日 星期二 19时52分49秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
long long ans[55];

int main() {
    int n, m;
    cin >> n >> m;
    ans[0] = 1;
    for (int i = 1; i <= n; i++) {
        if (i < m) {
            ans[i] = 2 * ans[i - 1];
        } else if (i == m) {
            ans[i] = 2 * ans[i - 1] - 1;
        } else {
            ans[i] = 2 * ans[i - 1] - ans[i - m - 1];
        }
    }
    cout << ans[n] << endl;
    return 0;
}
