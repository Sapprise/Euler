/*************************************************************************
	> File Name: 277.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月20日 星期二 13时23分35秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_N 100000
int haxi[MAX_N];
char MN[100][100] = {0};
int and[100][100] = {0};


int main() {
    int m, n, a, b, ant = 0;
    char c;
    scanf("%d%d%d%d", &m, &n, &a, &b);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%c", &c);
            MN[i][j] = c;
            and[i][j + 1] = (c - '0') * (j % b + 1) +  * (i % a + 1) + and[i][j];
            if (i >= (a - 1) && j >= (b - 1)) {
                 
            }
            

        }
    }
}
