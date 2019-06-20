/*************************************************************************
	> File Name: ep09-1.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月16日 星期日 14时54分19秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int ans = 0;
    for (int c = 334; c < 500; c++) {
        for (int b = (1000 - c) / 2; b < 500; b++) {
            if(((1000 - b - c) * (1000 - b -c) + b * b) == c * c) {
                ans = (1000 - b - c) * b * c;
            } 
        }
    }
    cout << ans << endl;
    return 0;
}
