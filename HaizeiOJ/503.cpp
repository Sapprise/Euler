/*************************************************************************
	> File Name: 503.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月06日 星期三 09时53分16秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
int weight[30005];

int main() {
    int w, n, l, r, ans = 0;
    cin >> w >> n;
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }
    sort(weight, weight + n);
    l = 0, r = n - 1;
    while (l <= r) {
        int s;
        s = w - weight[r];
        r--;
        ans++;
        if (s >= weight[l]) {
            l++;
        }
        if (l == r) {
            ans++;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
