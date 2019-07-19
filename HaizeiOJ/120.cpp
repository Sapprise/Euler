/*************************************************************************
	> File Name: 113.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年07月19日 星期五 20时31分53秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;


int main() {
    int y, m,d;
    cin >> y >> m >> d;
    if (y * m * d < 0 || m > 12) {
        cout << "NO" << endl;
        return 0;
    }

    if (y % 100 == 0 && y % 400 == 0 ||(y % 100 != 0 && y % 4 == 0)) {
        if (m == 2) {
            if (d > 29) {
                cout << "NO";
            } else {
                cout << "YES";
            }
            return 0;
        }
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            if (d > 31) {
                cout << "NO";
            } else {
                cout << "YES";
            }
        } else {
            if (d > 30) {
                cout << "NO";
            } else {
                cout << "YES";
            }
        }
    } else {
        if (m == 2) {
            if (d > 28) {
                cout << "NO";
            } else {
                cout << "YES";
            }
            return 0;
        }
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            if (d > 31) {
                cout << "NO";
            } else {
                cout << "YES";
            }
        } else {
            if (d > 30) {
                cout << "NO";
            } else {
                cout << "YES";
            }
        }
    }
    return 0;
}


