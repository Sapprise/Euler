/*************************************************************************
	> File Name: 253.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月29日 星期六 18时53分49秒
 ************************************************************************/

#include <stdio.h>

#define MAX_N 2500
int nai[MAX_N + 5][3];
int fang[MAX_N + 5][2];

int main() {
    int c,l;
    scanf("%d %d", &c, &l);
    for (int i = 0; i < c; i++) {
        scanf("%d %d", &nai[i][0], &nai[i][1]);
    }
    
    for (int j = 0; j < l; j++) {
        int a,b;
        scanf("%d %d", &a, &b);
        fang[a][0] += b;
        for (int i = 0; i < c; i++) {
            if (fang[a][0] >= nai[i][0] && fang[j][0] <= nai[i][1]) {
                fang[j][2] += 1;
            }
        }
    }
    
    
}
