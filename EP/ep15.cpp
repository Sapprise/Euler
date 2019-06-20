/*************************************************************************
	> File Name: ep15.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月16日 星期日 21时02分44秒
 ************************************************************************/

#include <iostream>
using namespace std;


int main() {
    int sum = 1;
    for (int i = 1; i <= 20; i++) {
        sum = sum * (i + 20) / i;
    }
    cout << sum << endl;
}
