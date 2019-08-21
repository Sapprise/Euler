/*************************************************************************
	> File Name: 282.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月21日 星期三 17时21分16秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

#define MAX_N 3200000
#define BASE 30

struct Node {
    int num;
    int next[2];
} tree[MAX_N + 5];

int root = 1, cnt = 1;
int arr[(MAX_N >> 5) + 5];

inline int getNode() {
    return ++cnt;
}

void insert(int num) {
    int p = root;
    for (int i = BASE; i >= 0; --i) {
        int ant = !!((1 << i) & num);
        if (tree[p].next[ant] == 0) tree[p].next[ant] = getNode();
        p = tree[p].next[ant];
    }
    tree[p].num = num;
    return ;
}

int rearch(int num) {
    int p = root;
    for (int i = BASE; i >= 0; --i) {
        int ant = !!((1 << i) & num);
        int ind = !ant;
        if (tree[p].next[ind]) p = tree[p].next[ind];
        else p = tree[p].next[ant];
    }
    return num ^ tree[p].num;
}

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i], insert(arr[i]);
    for (int i = 0; i < n; i++) {
        ans = max(ans, rearch(arr[i]));
    }
    cout << ans << endl;
    return 0;
}
