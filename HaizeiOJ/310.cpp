/*************************************************************************
	> File Name: 310.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月24日 星期六 16时21分12秒
 ************************************************************************/

#include <iostream>
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

int main() {
    int n;
    cin >> n;
    for (int M = 2; M <= n; M++) {
        if (is_prime[M] == 0) {
            prime[++prime[0]] = M;
            res[M] += 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * M > n) break;
            is_prime[prime[j] * M] = 1;
            res[prime[j]] += 1;
            for (int k = j; k <= prime[0]; k++) {
                int aa = M;
                if (aa % prime[k] == 0) {
                    int bb = 0;
                    while(!(aa % prime[k])) bb += 1, aa /= prime[j];
                    res[prime[k]] += bb;
                }
            }
            if (M % prime[j] == 0) break;
        }
    }
    for (int i = 2; i <= n; i++) {
        if (!res[i]) continue;
        cout << i << " " << res[i] << endl;
    }
    return 0;
}
