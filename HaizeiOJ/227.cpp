/*************************************************************************
	> File Name: 227.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年07月25日 星期四 14时55分04秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    long long a, b, p ,ans = 0;
    cin >> a >> b >>p;
    while (b) {
        if (b & 1) {
            ans = (ans + a) % p;
        }
        b = b >> 1;
        a = (a * 2) % p;
    }
    cout << ans;

    return 0;
}
