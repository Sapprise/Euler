/*************************************************************************
	> File Name: 487.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月22日 星期二 18时50分15秒
 ************************************************************************/

#include<iostream>
using namespace std;
int ans[50];

int my_ans(int n) {
    if (n == 0) return 1;
    if (n < 0) return 0;
    if (ans[n] != 0) return ans[n];
    return ans[n] = my_ans(n - 1) + my_ans(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << 2 * my_ans(n - 1) << endl;
    return 0;
}
