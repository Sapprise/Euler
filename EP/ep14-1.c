/*************************************************************************
	> File Name: ep14-1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月15日 星期六 19时12分40秒
 ************************************************************************/

#include <stdio.h>


int get_chain_length(long long x) {
    if (x == 1) return 1;
    if (x & 1) return get_chain_length(3 * x + 1) + 1;
    return get_chain_length(x / 2) + 1;
}

int main() {
    int man_len = 0, num = 0;
    for (int i = 1; i < 1000000; i++) {
        int l = get_chain_length(i);
        if (l > man_len) man_len = l, num = i;
    }
    printf("%d\n", num);

    return 0;
}
