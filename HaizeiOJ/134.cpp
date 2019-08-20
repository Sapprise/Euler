/*************************************************************************
	> File Name: 134.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月20日 星期二 15时08分36秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int a ,b;
    cin >> a >> b;
    for (int i = a / 11; i < b / 11; i++) {
        if (i * 11 >= a) cout << i * 11 << " ";
    }
    if (b / 11) cout << b / 11 * 11;
    return 0;
}
