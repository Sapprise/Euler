/*************************************************************************
	> File Name: 509.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月08日 星期五 09时57分22秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <set>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>
using namespace std;
#define MAX_N 10000

struct Data {
    int p, d;
} arr[MAX_N + 5];

bool cmp(const Data &a, const Data &b) {
    return a.d < b.d;
}

typedef pair<int, int> PII;
set<PII> s;

int main() {
    int m,n,all = 0;
    cin >> m >> n;
    for (int i = 0; i < n; i++) cin >> arr[i].d;
    for (int i = 0; i < n; i++) cin >> arr[i].p, all += arr[i].p;
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++) {
        if (arr[i].d > s.size()) {
            s.insert(PII(arr[i].p, i));
        } else if (arr[i].p > s.begin()->first){
            s.erase(s.begin());
            s.insert(PII(arr[i].p, i));
        }
    }
    int sum = 0;
    for (auto iter = s.begin(); iter != s.end(); iter++) {
        sum += iter->first;
    }
    cout << m - all + sum << endl;
    return 0;
}


