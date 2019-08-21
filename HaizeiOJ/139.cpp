/*************************************************************************
	> File Name: 139.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月20日 星期二 20时39分27秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, max = 0, k = 1;
    char x = 'A';
    cin >> n;
    max = 2 * n;
    for (int i = 0; i < n; i++) {
        int s = n - i - 1;
        while(s) cout << " ", s--;
        for (int j = 0; j < k; j++) {
            cout << x;
        }
        x += 1;
        k += 2;
        cout << endl;
    }
    x -= 2;
    k -= 4;
    for (int i = 1; i <= n - 1; i++) {
         int s = i;
        while (s) cout << " ", s--;
        for (int j = 0; j < k; j++) {
            cout << x;
        }
        x -= 1;
        k -= 2;
        cout << endl;
    }
    return 0;
}
