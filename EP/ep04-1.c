/*************************************************************************
	> File Name: ep04-1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年05月19日 星期日 19时17分22秒
 ************************************************************************/

#include <stdio.h>

int is_valid(int x, int base) {
    int raw = x, temp = 0;
    while (x) {
        // 推导这段代码的正确性
        // 证明：这就是位权运算
        temp = temp * base + x % base;
        x /= base;
    }
    return temp == raw;
}

int main() {
    int ans = 0;
    for (int i = 100; i < 1000; i++) {
        for ( int j = i; j < 1000; j++) {
            if ( is_valid(i * j, 10) && i * j > ans ) ans = j * i; 
        }
    }
    printf("%d\n", ans);
    return 0;
}
