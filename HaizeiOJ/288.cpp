/*************************************************************************
	> File Name: 288.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月12日 星期一 19时30分41秒
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int> > p; //小
priority_queue<int> q; //大

int main() {
    int m, n, a;
    cin >> n >> m;
    int data[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a;
        data[i] = a;
    }
    int pnums = 0, qnums = 0, s;
    for (int i = 1, j = 0; i <= m; i++) {
        cin >> a;
        while (j < a) {
            j++;
            if (qnums == 0 || data[j] < q.top()) {
                q.push(data[j]);
                qnums++;
            } else {
                p.push(data[j]);
                pnums++;
            } 
        }
        while (qnums > i) {
            s = q.top();
            q.pop();
            qnums--;
            p.push(s);
            pnums++;
        }
        while (qnums < i) {
            s = p.top();
            p.pop();
            pnums--;
            q.push(s);
            qnums++;
        }
        cout << q.top() << endl;
    }
    return 0;
}
