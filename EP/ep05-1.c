/*************************************************************************
	> File Name: ep05-1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月11日 星期二 20时17分16秒
 ************************************************************************/

#include <stdio.h>

typedef long long lint;
lint gcd(lint a, lint b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    lint ans = 1;
    for (int i =2; i <= 20; i++) {
        ans = ans * i / gcd(ans, i);
    }
    printf("%lld\n", ans);
    return 0;

}
