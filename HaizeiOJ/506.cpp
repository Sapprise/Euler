/*************************************************************************
	> File Name: 506.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月07日 星期四 09时39分12秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int data[100];
int flage[100];

bool cmp(int a, int b) {
    return data[a] < data[b];
}
int main() {
    int n, all = 0;
    double t;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &data[i]);
        flage[i] = i;
    }
    sort(flage + 1, flage + n + 1, cmp);
    all = data[flage[1]] * (n - 1);
    cout << flage[1];
    for (int i = 2; i <= n; i++) {
        cout << " " << flage[i]; 
        all += (data[flage[i]] * (n - i));
    }
    cout << endl;
    t = all * 1.0 / n;
    printf("%.2lf\n", t);
    return 0;
}
