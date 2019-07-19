/*************************************************************************
	> File Name: 114.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年07月19日 星期五 19时59分43秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main() {
    int n, sum;
    cin >> n;
    sum = 2 * n;
    while (sum) {
        for (int i = 1; i <= sum; i++) {
            cout << "A";
        }
        cout << endl;
        sum -= 2;
    }
    return 0;
}
