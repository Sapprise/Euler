/*************************************************************************
	> File Name: ep07-1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月15日 星期六 14时14分27秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int is_prime(int x) {
    if (x <= 1) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() {
    int cnt = 0, i = 1;
    while (cnt < 10001) {
        i++;
        if (is_prime(i)) cnt += 1;
    }
    printf("%d\n", i);
}
