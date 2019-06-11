/*************************************************************************
	> File Name: ep02-1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年05月19日 星期日 18时27分14秒
 ************************************************************************/

#include <stdio.h>

#define MAX_N 44
#define MAX_M 4000000
int fib[MAX_N + 5];

int main() {
    int n = 2;
    fib[1] = 1; fib[2] = 2;
    while (fib[n] + fib[n - 1] < MAX_M) {
        fib[n + 1] = fib[n] + fib[n - 1];
        n += 1;
    }
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        if (fib[i] % 2) continue;
        sum += fib[i];
    }
    printf("%lld\n", sum);
    return 0;
}
