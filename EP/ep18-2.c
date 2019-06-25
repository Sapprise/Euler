/*************************************************************************
	> File Name: ep18-1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月25日 星期二 18时40分52秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_N 20
int val[MAX_N + 5][MAX_N + 5];


int main() {
    for (int i = 0; i < MAX_N; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%d", &val[i][j]);
        }
    }
    for (int i = MAX_N - 2; i >= 0; --i) {
        for (int j = 0; j <= i; j++) {
            val[i][j] += max(val[i + 1][j], val[i + 1][j + 1]);
        }
    }
    printf("%d",val[0][0] );

    return 0;
}
