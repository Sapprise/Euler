/*************************************************************************
	> File Name: 53.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月27日 星期四 18时59分23秒
 ************************************************************************/

#include <stdio.h>

#define MAX_N 1000000
int prime[MAX_N + 5];
long long dnum[MAX_N + 5];
long long mnum[MAX_N + 5];

int main() {
    
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            dnum[i] = i + 1;
            mnum[i] = i;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j]) {
                dnum[i * prime[j]] = dnum[i] * dnum[prime[j]];
                mnum[i * prime[j]] = prime[j];
            } else {
                mnum[i * prime[j]] = mnum[i] * prime[j];
                int a = mnum[i * prime[j]], b = i * prime[j] / a;
                dnum[i * prime[j]] = dnum[a] * dnum[b];
                if (b == 1) dnum[i * prime[j]] = (a * prime[j] - 1) / (prime[j] - 1);
                break;
            }
        }
    }
    long long ans = 0;
    for (int i = 1; i <= MAX_N; i++) {
        if (dnum[i] > ans) ans = dnum[i];
    }
    printf("%lld\n", ans);
    return 0;
}
