/*************************************************************************
	> File Name: 253-1.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月29日 星期六 19时09分24秒
 ************************************************************************/

#include <stdio.h>
#include <algorithm>

#define MAX 2500

int nai[MAX +5][2];

int fang[MAX + 5];

int panduan(int &nai[a], int &nai[b]) {
    if (nai[a][1] - nai[b][1]) return nai[a][1] < nai[b][1];
    return nai[a][0] > nai[b][0];
}

int main() {
    int c,l;
    
    scanf("%d%d", &c, &l);
    for (int i = 0; i < c;i++) {
        printf("%d%d", &nai[i][0],&nai[i][1]);
    }
    for (int i = 0; i < l; i++) {
        int a, b;
        printf("%d%d", &a,&b);
        fang[a] += b;
    }
    sort(nai, nai + 2n, panduan);
    int cnt = 0;
    for (int = 0; i < c; i++) {
        int flag = -1;
        for (int j = 0; j < l; j++) {
            if (fang[j] >= nai[i][0] && fang[j][])
            
        }
    }

}

