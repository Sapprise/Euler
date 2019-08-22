/*************************************************************************
	> File Name: 326.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月22日 星期四 15时22分15秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 50000

struct UnionSet {
    int fa[MAX_N + 5], val[MAX_N + 5];
    void init(int n) {
        for (int i = 0; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        if (x == fa[x]) return x;
        int root = get(fa[x]);
        val[x] += val[fa[x]];
        val[x] %= 3;
        return fa[x] = root;
    }
    void merge(int a, int b, int c) {
        int aa = get(a), bb = get(b);
        if (aa == bb) return ;
        fa[aa] = bb;
        val[aa] = (c + val[b] - val[a] + 3) % 3;
        return ;
    }
};

UnionSet u;

int main() {
    int n, k, ant = 0;
    cin >> n >> k;;
    u.init(n);
    for (int i = 0; i < k; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (b > n || c > n) {
            ant += 1;
            continue;
        }
        if (u.get(b) != u.get(c)) {
            u.merge(b, c, a - 1);
        } else {
            if ((u.val[b] - u.val[c] + 3) % 3 == a - 1) continue;
            ant += 1;
        }
    }
    cout << ant << endl;
    return 0;
}
