/*************************************************************************
	> File Name: 331.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月24日 星期六 13时54分00秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 80000
#define lowbit(x) ((x) & (-x))
int c[MAX_N + 5];
int nums[MAX_N + 5];
int res[MAX_N + 5];
void add(int x, int val, int n) {
    while (x <= n) c[x] += val, x += lowbit(x);
}

int query(int x) {
    int sum = 0;
    while (x) sum += c[x], x -= lowbit(x);
    return sum;
}

int main() {
    int n;
    cin >> n;
    add(1, 1, n);
    nums[1] = 1;
    for (int i = 1; i < n; i++) {
        cin >> nums[i + 1];
        nums[i + 1] += 1;
        add(i + 1, 1, n);
    }
    for (int i = n; i > 0; i--) {
        int h = 1, l = n;
        while (l - h) {
            if (query(h) == nums[i]) break;
            if (query(l) == nums[i]) break;
            int t = (h + l) / 2;
            int ad = query(t);
            if (ad == nums[i]) {
                l = t;
                break;
            } else if (ad < nums[i]) {
                h = t;
            } else {
                l = t;
            }
        }
        for (int j = h; j <= l; j++) {
            if (query(j) != nums[i]) continue;
            add(j, -1, n);
            res[i] = j;
            break;
        }
    }
    for (int k = 1; k <= n; k++) {
        cout << res[k] << endl;
    }    
    return 0;
}
