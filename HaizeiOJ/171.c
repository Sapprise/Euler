/*************************************************************************
	> File Name: 171.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月19日 星期一 14时23分24秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX_N 1000000
#define BASE 31
#define MOD_P 10000009
char str1[(MAX_N) << 1], str2[MAX_N + 5];
int h[(MAX_N << 1) + 5], base[MAX_N + 5];

void init() {
    base[0] = 1;
    for (int i = 1; i <= MAX_N; i++) {
        base[i] = base[i - 1] * BASE % MOD_P;
    }
    return ;
}

void inti_hash_code(char *str) {
    for (int i = 0; str[i]; i++) {
        h[i + 1] = (h[i] * BASE + str[i]) % MOD_P;
    }
    return ;
}

int main() {
    inti();
    scanf("%s%s", str1, str2);
    int len1 = strlen(str1), len2 = strlen(str2);
    
}
