/*************************************************************************
	> File Name: 125.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月20日 星期二 16时38分41秒
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int h, m, s, t, time, flag = 0;
    double b;
    cin >> h >> m >> s >> t;
    b = t * 1.0 / 86400 * 100;
    time = h * 60 * 60 + m * 60 + s;
    t = t + time;
    if (t / 3600 % 12) {
        cout << t / 3600 % 12;
    } else {
        cout << 12;
    }
    if (t / 3600 % 24 >= 12) flag = 1;
    t -= t / 3600 * 3600;
    cout << ":" << t / 60;
    t -= t / 60 * 60;
    cout << ":" << t;
    if (flag) {
        cout <<"pm" << endl;
    } else {
        cout <<"am" << endl;
    }
    cout << fixed << setprecision(2) << b << "%" << endl;
    return 0;
}
