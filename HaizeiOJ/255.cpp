/*************************************************************************
	> File Name: 255.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月29日 星期六 19时51分18秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define MAX_N 1000

struct Range {
    double l, r;
} arr[MAX_N + 5];

bool cmp(const Range &a, const Range &b) {
    if (a.r - b.r) return a.r < b.r;
    return a.l > b.l;
}

int main() {
    int n,d;
    int flag = -1;
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;
        arr[i].l =  a - sqrt(d * d - b * b);
        arr[i].r =  a + sqrt(d * d - b * b);
        if (b > d) {flag = 1;}
    }
    if (flag == 1) {
        cout << -1 <<endl;
        return 0;
    }
    sort(arr, arr + n, cmp);
    double p = arr[0].r;
    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i].l > p) {
            p = arr[i].r;
            ans +=1;
        }
    }
    cout << ans << endl;
    return 0;
}
