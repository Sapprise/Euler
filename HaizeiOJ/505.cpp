/*************************************************************************
	> File Name: 505.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年11月06日 星期三 10时13分17秒
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

string arr[100005];
bool cmp(const string a, const string b) {
    return a + b > b + a;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    return 0;
}

