/*************************************************************************
	> File Name: 122.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年07月21日 星期日 18时54分28秒
 ************************************************************************/

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    int t;
    int h = 0, m = 0, s = 0;
    char tr[10] = {0};
    cin >> t;
    if (t < 12 * 60 * 60) {
        strncpy(tr, "am", 2);
    } else if (t <= 13 * 60 * 60) {
        strncpy(tr, "midnoon", 7);
    } else {
        strncpy(tr, "pm", 2);
    }
        h = t / (60 * 60);
        t -= h * 60 * 60;
        m = t / 60;
        t -= m * 60;
        s = t;
        if (h > 12) h -= 12;

        if (h < 10) {
            cout << "0" << h;
        }else {
            cout << h;
        }
        if (m < 10) {
            cout << ":" << "0" << m;
        }else {
            cout << ":" << m;
        }
        if (s < 10) {
            cout << ":" << "0" << s;
        }else {
            cout << ":" << s;
        }
        cout << " " << tr << endl;
    return 0;
}
