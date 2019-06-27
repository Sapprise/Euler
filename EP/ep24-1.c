/*************************************************************************
	> File Name: 56.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月26日 星期三 18时25分01秒
 ************************************************************************/

#include <stdio.h>

int number_use[11] = {1,1,1,1,1,1,1,1,1,1,1};
int chengji[10];
int result[11];


int deal_result(int all) {
    int m = result[0];
    for (int i = 1; i <= all; i++) {
        if (number_use[i]) {
            result[m + 1] = i;
            m += 1;
        }
    }
    return 0;
}


int factorial(int all,int x, int y) {
    if (y == 0) return 0;
    if (y < chengji[x - 1]) {
        number_use[all - (x - 1)] = 0;
        result[0] += 1;
        number_use[0] -= 1;
        return factorial(all, number_use[0], y);
    } 
    if (y >= chengji[x - 1]) {
        int m, k;
        m = k = y / chengji[x - 1] + 1;
        for (int i = 1; i <= all; i++) {
            if (!number_use[i]) continue;
                result[all - (x - 1)] = i;
                k -= 1;
                if (k == 0) {
                    number_use[i] = 0;
                    number_use[0] -= 1;
                    result[0] += 1;
                    deal_result(all);
                    y -= (m - 1) * chengji[x - 1];
                    return factorial(all, number_use[0], y);
                }
        }
    }
}


int main() {
    for (int i = 1; i <= 9; i++) {
        int cheng = 1;
        for (int j = 1; j <= i; j++) {
            cheng *= j;
        }
        chengji[i] = cheng;
    }
    int x, y;
    scanf("%d %d", &x, &y);
    number_use[0] = x, result[0] = 0;
    deal_result(x), y -= 1;
    factorial(x, number_use[0], y);
    for (int i = 1; i <= x; i++) {
        printf("%d", result[i]- 1);
    }
    
    return 0;
}
