/*************************************************************************
	> File Name: 271.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年07月25日 星期四 15时37分18秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 300000

int main() {
    long long num[MAX_N], Max[MAX_N], Min[MAX_N], max, min;
    int head, tail, n, k, ans = 0;
    head = tail = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    max = min = num[0];
    tail++;
    for (int i = 1; i < n; i++) {
        if (num[i] <= min) {
            min = num[i];
            head = 
        }
        
        

    }
}
