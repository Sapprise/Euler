/*************************************************************************
	> File Name: ep28-1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年05月19日 星期日 20时19分56秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX 1001

int main() {
    int sum = 1;
    for (int l = 3; l <= MAX; l += 2) {
        sum += 4 * l * l - 6 * l + 6;
    }
    int sum2 = 1;
    sum2 = 4 * ((2 * pow(1001, 3) + 3 * pow(1001, 2) + 1001 ) / 6 - 5 ) - 6 * (3 + 1001) * 999 / 2 + 6 * 999;
    printf("%d\n", sum2);
    printf("%d\n", sum);
    return 0;
}
