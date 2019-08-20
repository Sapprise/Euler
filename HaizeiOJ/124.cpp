/*************************************************************************
	> File Name: 124.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月20日 星期二 15时38分42秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, flag = 0;
    cin >> a >> b >> c >> d;
    if (a >= 1 || b <= 50) flag += 1;
    if (c <= 25 || d >= 5) flag += 1;
    if (flag == 2) {
        cout << "ok";
    }else {
        cout << "pass";
    }
    return 0;
}
