/*************************************************************************
	> File Name: 310-2.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月24日 星期六 23时26分54秒
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define MAX_N 1000000
int is_prime[MAX_N + 5];
int prime[MAX_N + 5];
int res[MAX_N + 5];
int p[(MAX_N >> 1) + 5][1000];

int main() {
    int n;
    scanf("%d", &n);
    for (int M = 2; M <= n; M++) {
        if (is_prime[M] == 0) {
            prime[++prime[0]] = M;
            res[M] += 1;
            if (M * M < n) {
                p[M][M] = 1;
            }
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * M > n) break;
            int a = prime[j] * M;
            is_prime[a] = 1;
            res[prime[j]] += 1;
            if (a <= (MAX_N >> 1)) {
                p[a][prime[j]] += 1;
            }
            for (int k = j; k <= prime[0]; k++) {
                int aa = M;
                if (aa % prime[k] == 0) {
                    //int bb = 0;
                    //while(!(aa % prime[k])) bb += 1, aa /= prime[k];
                    //res[prime[k]] += bb;
                    res[prime[k]] += p[M][prime[k]];
                    if (a <= (MAX_N >> 1)) {
                        p[a][prime[k]] += p[M][prime[k]];
                    }
                }
            }
            if (M % prime[j] == 0) break;
        }
    }
    for (int i = 1; i <= prime[0]; i++) {
        //cout << prime[i] << " " << res[prime[i]] << endl;
		printf("%d %d\n", prime[i], res[prime[i]]);
    }
    return 0;
}
