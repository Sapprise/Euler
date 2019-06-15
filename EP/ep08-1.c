/*************************************************************************
	> File Name: ep08-1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月15日 星期六 16时20分15秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX 1000
char num[MAX + 5];

int main() {
    int len = 0;
    while (~scanf("%s", num + len)) len += strlen(num + len); 
    long long p = 1, zero_cnt = 0, ans = 0;
    for (int i = 0; num[i]; i++) {
        num[i] -= '0';
        if (num[i]) p *= num[i];
        else zero_cnt += 1;
        if (i - 13 < 0) continue;
        if (num[ i - 13 ]) p /= num[i - 13];
        else zero_cnt -= 1;
        if ( zero_cnt == 0  && p > ans) ans = p;
    }
    printf("%lld\n", ans);
    return 0;
}
