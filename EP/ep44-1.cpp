/*************************************************************************
	> File Name: ep44-1.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年06月16日 星期日 15时23分24秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 10000000

int p[MAX_N + 5];


int p_jisuan(int n) {
    return (3 * n * n - n) / 2;
}

int searchmax(int j, int k) {
    for (int i = k; i < 2 * k; i++) {
        if ((p[j] + p[k]) != p_jisuan(i)) continue;
        return 1;
    }
    return 0;
}

int searchmin(int n) {
    for (int i = 2; i < n; i++) {
        for (int j = 1; j < i; j++) {
            if ((p[n] - p[i])!= p[j]) continue;
            if(searchmax(i, n)){ 
                return p[n] - p[i];

        }
    }
    }
    return 0;
}

int main() {
    int D = 10000000;
    p[1] = 1;p[2] = 5; 
    for (int n = 3; p_jisuan(n) - p_jisuan(n - 1) < D; n++) {
        p[n] = p_jisuan(n);
        if(searchmin(n) > 0) {
            D = searchmin(n);
        }
    }
    cout << D << endl;
    return 0;
}
