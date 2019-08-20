/*************************************************************************
	> File Name: 127.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月20日 星期二 18时12分36秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    double x, n, sum;
    int s;
    cin >> x >> n;
    sum = x;
    while(n) {
        sum = (1 + 0.06) * sum;
        n--;
    }
    s = sum;
    cout << s << endl;
    return 0;
}
