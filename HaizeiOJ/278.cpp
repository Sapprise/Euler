/*************************************************************************
	> File Name: 278.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月16日 星期五 13时55分02秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX 1000000
char str[MAX + 5];
int next[MAX + 5];
int ans[MAX + 5];

void get_next(char *str, int *next) {
    int j = -1;
    next[0] = -1;
    for (int i = 1; str[i]; i++) {
        while (j != -1 && str[j + 1] != str[i]) j = next[j];
        if (str[j + 1] == str[i]) j += 1;
        next[i] = j;
    }
    return ;
}

int main() {
    int n;
    cin >> n;
    cin >> str;
    get_next(str, next);
    for (int i = 0; i < n; i++) {
        if (next[i] == -1 || (i - next[i]) != ans[next[i]]) {
            ans[i] = i + 1;
        } else {
            ans[i] = ans[next[i]];
        }
    }
    for (int i = 0; i < n; i++) {
        if (ans[i] == i + 1) continue;
        cout << i + 1 << " " << (i + 1) / ans[i] << endl;
        
    }
    return 0;
}
