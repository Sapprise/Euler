/*************************************************************************
	> File Name: 486.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月22日 星期二 18时20分09秒
 ************************************************************************/

#include<iostream>
using namespace std;
int flase[1005];

int my_ans(int n) {
    int ans = 0;
    if (n < 0) return 0;
    if (n == 0 || n == 1) return 1;
    if (flase[n] != 0) return flase[n];
    return flase[n] = (my_ans(n - 1) + 2 * my_ans(n - 2)) % 12345;
}


int main() {
    int n, ans = 0;
    cin >> n;
    ans =  my_ans(n);
    cout << ans  << endl;
    return 0;
}
