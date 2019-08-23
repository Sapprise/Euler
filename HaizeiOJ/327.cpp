/*************************************************************************
	> File Name: 327.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月22日 星期四 22时34分27秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAX_M 100000
#define MAX_N 20000

struct Data {
    int a, b;
    long long c;
} arr[MAX_M + 5];

struct UnionSet {
    int fa[MAX_N + 5], val[MAX_N + 5];
    int init(int n) {
        for(int i = 1; i <= n; i++) fa[i] = i;
    }
    int get(int x) {
        if (x == fa[x]) return x;
        int root = get(fa[x]);
        val[x] = (val[x] + val[fa[x]]) % 2;
        return fa[x] = root;
    }
    void merge(int a, int b) {
        int aa = get(a), bb = get(b);
        if (aa == bb) return ;
        fa[aa] = bb;
        val[aa] = (val[bb] + 1) % 2;
        return ;
    } 
};

UnionSet u;

bool cmp(const Data &a, const Data &b) {
    return a.c > b.c;
}

int main() {
    int n, m;
    cin >> n >> m;
    u.init(n);
    for (int i = 0; i < m; i++) {
        cin >> arr[i].a >> arr[i].b >> arr[i].c;
    }
    sort(arr, arr + m, cmp);
    for (int i = 0; i < m; i++) {
        if (u.get(arr[i].a) != u.get(arr[i].b)) {
            u.merge(arr[i].a, arr[i].b);
        } else {
            int k = (u.val[arr[i].a] - u.val[arr[i].b] + 2) % 2;
            if (!k) {
                cout << arr[i].c << endl;
                break;
            }
        }
    }
    return 0;
}

