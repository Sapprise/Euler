/*************************************************************************
	> File Name: 287.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月12日 星期一 19时11分07秒
 ************************************************************************/

#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

priority_queue<int, vector<int>, greater<int> > q;

int main() {
    int a, n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a, q.push(a);
    }
    for (int i = 1; i < n; i++) {
        int val1 = q.top(); q.pop();
        int val2 = q.top(); q.pop();
        q.push(val1 + val2);
        sum += val1 + val2;
    }
    cout << sum << endl;
    return 0;
} 
