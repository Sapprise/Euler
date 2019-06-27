/*************************************************************************
	> File Name: 1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月25日 星期二 19时30分58秒
 ************************************************************************/

#include <stdio.h>

#define MAX 1000

int val[MAX + 5][MAX + 5];
int keep[MAX + 5][MAX + 5];

int sum(int i, int j, int n) {
    if (i + 1 == n) return val[i][j];
    if (keep[i][j] != 0) return keep[i][j];
    int val1 = sum(i+1, j, n);
    int val2 = sum(i+1,j+1, n);
    return keep[i][j] = (val1 > val2? val1 : val2) + val[i][j];
}

int main() {
    int line;
    scanf("%d", &line);

    for(int i = 0; i < line; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%d", &val[i][j]);
        }
    }
    printf("%d", sum(0, 0,line));
    return 0;
}
