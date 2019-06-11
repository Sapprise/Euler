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
    long long sum = 0;
    int a = 0, b = 1;
    while (a + b < MAX_M) {
        b = a + b;
        a = b - a;
        if (!(b & 1)) sum += b;
    }
    printf("%lld\n", sum);
    return 0;
}
