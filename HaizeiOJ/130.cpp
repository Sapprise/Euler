/*************************************************************************
	> File Name: 130.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月20日 星期二 20时19分17秒
 ************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m, n;
    double sum = 0;
    cin >> m >> n;
    while(n) {
        sum = (sum + m) * (1 + 0.00417);
        n--;
    }
    cout << fixed << setprecision(2)<< "$" << sum << endl;
    return 0;
}


