/*************************************************************************
	> File Name: 226.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年07月25日 星期四 14时16分24秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    long long a, b, p, ans = 1;
    cin >> a >> b >> p;
    while (b) {
        if (b & 1) {
            ans = (ans * a) % p;
        }
        b = b >> 1;
        a = (a * a) % p;
    }
    cout << ans % p;
    return 0;
}
