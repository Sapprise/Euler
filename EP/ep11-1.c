/*************************************************************************
	> File Name: ep11-1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月15日 星期六 18时32分46秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX_N 20
int dir[4][2] = {1, 0, 0, 1, 1, -1, 1, 1};
int grid[MAX_N + 5][MAX_N + 5];

long long calc(int x, int y) {
    long long ans = 0;
    for (int k = 0; k < 4; k++) {
        long long p = 1;
        for (int step = 0; step < 4; step++) {
            int dx = x + step * dir[k][0];
            int dy = y + step * dir[k][1];
            if (dx < 0 || dx >= MAX_N) break;
            if (dy < 0 || dy >= MAX_N) break;
            p *= grid[dx][dy];
        }
    if (p > ans) ans = p;
    }
    return ans;
}

int main() {
    long long  max = 0, ans = 0;
    for (int m = 0; m < MAX_N; m++) {
        for (int n = 0; n < MAX_N; n++) {
            scanf("%d", &grid[m][n]);
        }
    }
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j < MAX_N; j++) {
            ans = calc(i, j);
            if (ans > max) max = ans;
        }
    }
    printf("%lld\n", max);
    return 0;
}
