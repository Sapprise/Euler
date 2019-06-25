/*************************************************************************
	> File Name: 2.c
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月25日 星期二 19时51分51秒
 ************************************************************************/

#include <stdio.h>

#define MAX 5000
int sum[MAX + 5];
int result[505];
int sum2[MAX + 5];
int main() {
    int x;
    while(scanf("%d", &x) != EOF) {
        for(int m = 0; m < MAX; m++) {
            sum[m] = 0;
            sum2[m] = 0;
        }

        sum[0] = sum[1] = 1;
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= sum[0]; j++) sum[j] = sum[j] * i;
            for (int j = 1; j <= sum[0]; j++) {
                if (sum[j] < 10) continue;
                    sum[j + 1] += sum[j] / 10;
                    sum[j] = sum[j] % 10;
                    sum[0] += (sum[0] == j);
            }
        }
        sum2[0] = sum2[1] = 1;
        for (int i = 1; i <= sum[0]; i++) {
            for (int j = 1; j <= sum2[0]; j++) {
                if (sum[i] == 0) continue;
                sum2[j] = sum2[j] * sum[i];
            }
            for (int j = 1; j <= sum2[0]; j++) {
                if (sum2[j] < 10) continue;
                    sum2[j + 1] += sum2[j] / 10;
                    sum2[j] = sum2[j] % 10;
                    sum2[0] += (sum2[0] == j);
            }
        }
        for (int k = sum2[0]; k >= 1; k--) {
            printf("%d", sum2[k]);
        }
        printf("\n");
    }
    return 0;
}
