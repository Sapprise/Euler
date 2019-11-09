/*************************************************************************
	> File Name: 488.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月24日 星期四 17时44分18秒
 ************************************************************************/

#include<iostream>
#include <cstdlib>
using namespace std;

#define MAX_N 100000
int apt[MAX_N + 5][2];
int x[MAX_N + 5], y[MAX_N + 5];

int main() {
    int n, min = 3000;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }
    apt[2][0] += (apt[1][0] + abs(x[2] - x[1]) + abs(y[2] - y[1]));
    for (int j = 3; j <= n; j++) {
        apt[j][0] += (apt[j - 1][0] + abs(x[j] - x[j - 1]) + abs(y[j] - y[j - 1]));
    }
    for (int j = 3; j <= n; j++) {
        int k;
        k = apt[n][0] - apt[j][0] + apt[j - 2][0] + abs(x[j] - x[j - 2]) + abs(y[j] - y[j - 2]);
        if (k < min) min = k;
    }
    cout << min << endl;
    return 0;
}
