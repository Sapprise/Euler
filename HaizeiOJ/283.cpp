/*************************************************************************
	> File Name: 283.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月21日 星期三 17时46分03秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

#define MAX_N 100000

struct Node {
    int flag;
    int next[10];
} tree[MAX_N * 10 + 5];

int root = 1, cnt = 1;
long long cout_flag = 0;
char str[MAX_N + 5];

int getNode() {
    return ++cnt;
}

void insert(const char *str) {
    int p = root, m = 0;
    for (int i = 0; str[i]; i++) {
        int ant = str[i] - '0';
        if (tree[p].next[ant] == 0) {
            tree[p].next[ant] = getNode();
            p = tree[p].next[ant];
        } else {
            p = tree[p].next[ant];
            if (tree[p].flag) {
                if (m == i) cout_flag += 1;
            }
            m += 1;
        }
    }
    if (m == strlen(str)) cout_flag += 1;
    tree[p].flag = 1;
    return ;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        cin >> str;
        insert(str);
    }
    if (cout_flag) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}


