/*************************************************************************
	> File Name: ep32-1.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月16日 星期日 14时11分05秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

bool add_to_num(int x, int *num) {
    while(x) {
        if (num[x % 10]) return false;
        num[x % 10] += 1;
        x /= 10;
    }
    return true;
}

inline int digtis(int x) {
    if (x == 0) return 1;
    return floor(log10(x)) + 1;
}

bool is_valid(int a, int b, int c) {
    if (digtis(a) + digtis(b) + digtis(c) - 9) return false;
    int num[10] = {0};
    int flag = 1;
    num[0] = 1;
    flag = flag && add_to_num(a, num);
    flag = flag && add_to_num(b, num);
    flag = flag && add_to_num(c, num);
    return flag;
}

int main() {
    int cnt[10005] = {0};
    int sum = 0;
    for (int a = 1; a < 100; a++) {
        for (int b = a+1; b < 10000; b++) {
            if (is_valid(a, b, a * b)) {
            if (cnt[a * b]) continue;
                cnt[a * b] = 1;
                sum += a * b;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
