/*************************************************************************
	> File Name: xxx.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月30日 星期五 18时39分31秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 10000
#define MIN(a, b) ((a) > (b)? (b) : (a))
int data[MAX_N + 5];
int main() {
    int n, p, h, m, s1, s2, smin, smax;
    cin >> n >> p >> h >> m;
    for (int i = 1; i <= n; i++) {
        data[i] = h;
    }
    for (int i = 0; i < m; i++) {
        cin >> s1 >> s2;
        smin = MIN(s1, s2);
        smax = s1^s2^smin;
        for (int j = smin + 1; j < smax; j++) {
            data[j] -= 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << data[i] << endl;
    }
    return 0;
}
