/*************************************************************************
	> File Name: 281.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月21日 星期三 16时07分36秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 1000000

struct Node {
    int flag;
    int next[26];
} tree[MAX_N + 5];

int root = 1, cnt = 1;
char str[MAX_N + 5];
int getNode() {
    return ++cnt;
}

void insert(const char *str) {
    int p = root;
    for (int i = 0; str[i]; i++) {
        int ant = str[i] - 'a';
        if (tree[p].next[ant] == 0) tree[p].next[ant] = getNode();
        p = tree[p].next[ant];
    }
    tree[p].flag += 1;
    return ;
}

int rearch(const char *str) {
    int p = root, ans = 0;
    for (int i = 0; str[i] && p; i++) {
        p = tree[p].next[str[i] - 'a'];
        ans += tree[p].flag;
    }
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> str;
        insert(str);
    }
    for (int i = 0; i < m; i++) {
        cin >> str;
        cout << rearch(str) << endl;
    }
    return 0;
}
