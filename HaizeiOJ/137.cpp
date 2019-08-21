/*************************************************************************
	> File Name: 137.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月20日 星期二 20时34分00秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    char a = 'A';
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << a;
            a += 1;
        }
        cout << endl;
    }
    return 0;
}
