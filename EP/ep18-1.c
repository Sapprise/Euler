/*************************************************************************
	> File Name: ep18-1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月25日 星期二 18时40分52秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX_N 20
int val[MAX_N + 5][MAX_N + 5];
int sum[MAX_N + 5][MAX_N + 5];

int dfs(int i, int j, int n) {
    if (i + 1 == n) {return val[i][j];}
    if (sum[i][j] != 0) return sum[i][j];
    int val1 = dfs(i + 1, j, n);
    int val2 = dfs(i + 1, j + 1, n);
    return sum[i][j] = (val1 > val2 ? val1 : val2) + val[i][j];
}

int main() {
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%d", &val[i][j]);
        }
    }
    printf("%d", dfs(0, 0, MAX_N));

    return 0;
}
