/*************************************************************************
	> File Name: ep07-2.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月15日 星期六 14时14分27秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX 200000
int is_prime[MAX + 5];



int main() {
    for (int i = 2; i * i <=MAX; i++) {
        if (is_prime[i]) continue;
        for (int j = i * i; j <=MAX; j += i) {
            is_prime[j] = 1;
        }
    }
    for (int i = 2; i <= MAX; i++) {
        if (is_prime[i]) continue;
        is_prime[++is_prime[0]] = i;
    }
    printf("%d\n", is_prime[10001]);
    return 0;
}
