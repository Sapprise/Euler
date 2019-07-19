/*************************************************************************
	> File Name: 270.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年07月17日 星期三 15时46分08秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 300000
#define MAX(a, b) ((a)>(b)? a : b)

long long q[MAX_N + 5], head, tail;
long long arr[MAX_N + 5];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%lld", &arr[i]);
        arr[i] += arr[i - 1];
    }
        head = tail = 0;
        q[tail++] = 0;
        long long ans = arr[0];
        for (int i = 0; i <= n; i++) {
            ans = MAX(ans, arr[i] - arr[q[head]]);
            while (tail - head && arr[q[tail - 1]] >= arr[i]) tail--;
            q[tail++] = i;
            if (q[head] == i - m) head++;
        }
        printf("%lld", ans);

    return 0;
}
