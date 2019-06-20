/*************************************************************************
	> File Name: ep07-3.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月15日 星期六 14时41分02秒
 ************************************************************************/

#include <stdio.h>


#define MAX_N 2000000
int is_prime[MAX_N + 5];


int main() {
    int cnt = 0;
    long long sum = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (is_prime[i]){
            for (int j = 1; j <= cnt; j++) {
                if ( i * is_prime[j] > MAX_N ) break;
                is_prime[i * is_prime[j]] = 1;
                if (i % is_prime[j] == 0) break;
            }
        }else {
            sum += i;
            cnt += 1;
            is_prime[cnt] = i;
            for (int j = 1; j <= cnt; j++) {
                if ( i * is_prime[j] > MAX_N ) break;
                is_prime[i * is_prime[j]] = 1;
                if (i % is_prime[j] == 0) break;
            }
        }    

    }
    printf("%lld\n", sum);

    return 0;
}
