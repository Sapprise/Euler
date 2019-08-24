/*************************************************************************
	> File Name: 188.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月24日 星期六 16时02分38秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 1000000
int prime[MAX_N + 5];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) continue;
        for (int j = 2; i * j <= n; j++) {
            prime[i * j] = 1;
        }
    }
    for (int i = m; i <= n; i++) {
        if (prime[i]) continue;
        cout << i << endl;
    }
}
