/*************************************************************************
	> File Name: 133.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月20日 星期二 14时57分07秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (j == n) {
                cout << i << "*" << j << "=" << i*j << endl;
            }else {
                cout << i << "*" << j << "=" << i*j << "\t";
            }
        }
    }
    return 0;
}
