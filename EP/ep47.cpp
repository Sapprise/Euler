/*************************************************************************
	> File Name: ep47.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月29日 星期六 16时04分30秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 1000000
int prime[MAX_N + 5];


int main() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i; j <= MAX_N; j += i) {
            prime[j] += 1;
        }
    }

    for (int i = 1; i <= MAX_N - 3; i++) {
        if (prime[i] != 4) continue;
        if (prime[i + 1] == 4 && prime[i + 2] == 4 && prime[i + 3] == 4) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
