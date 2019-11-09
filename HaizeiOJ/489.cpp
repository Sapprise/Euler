/*************************************************************************
	> File Name: 489.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月22日 星期二 20时26分35秒
 ************************************************************************/

#include<iostream>
using namespace std;

int flage[1005][2];

int main() {
    int n;
    cin >> n;
    flage[1][0] = 9, flage[1][1] = 1;
    for (int i = 2; i < n; i++) {
        flage[i][0] = (flage[i - 1][0] * 9 + flage[i - 1][1]) % 12345;
        flage[i][1] = (flage[i - 1][1] * 9 + flage[i - 1][0]) % 12345;
    }
    cout << (flage[n - 1][0] * 8 + flage[n - 1][1]) % 12345 << endl;
    return 0;
}
