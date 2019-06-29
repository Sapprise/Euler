/*************************************************************************
	> File Name: ep01-1.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月16日 星期日 08时42分29秒
 ************************************************************************/

#include <iostream>
using namespace std;

int is_valid(int x) {
    return x % 3 == 0 || x % 5 == 0;

}

int main() {
    int sum = 0;
    for (int i = 1; i < 1000; i++) {
        if (is_valid(i)) {
            sum += i;
        }
            
    }
    cout << sum << endl;
    return 0;
}
