/*************************************************************************
	> File Name: ep03-1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年05月19日 星期日 19时00分38秒
 ************************************************************************/

#include <stdio.h>

#define N 600851475143LL

int main () {
    long long num = N, i = 2, ans;
    while ( i * i <= num ) {
        if (num % i == 0) ans = i; //ans 记录最大的素因子. 证明：
        while (num % i == 0) num /= i;
        i++;
    }
    if (num != 1) ans = num;　// num 为什么一定时素数
    printf("%lld\n", ans);
    return 0;
}
