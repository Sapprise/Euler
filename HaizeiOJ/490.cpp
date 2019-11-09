/*************************************************************************
	> File Name: 490.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月24日 星期四 18时57分18秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX_N 32767
int flase[MAX_N + 5], t[MAX_N + 5];

int main() {
    int n;
    cin >> n;
    flase[1] = 1;
    for (int i = 2; i <= n; i++) {
        flase[i] = (flase[i - 1] + 1) % i + 1;
        if (flase[i] == i) t[i] = i;
        else t[i] = t[flase[i]];
    }
    cout << t[n] + n << endl;
    return 0;
}
