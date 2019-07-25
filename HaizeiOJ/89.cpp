/*************************************************************************
	> File Name: 89.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年07月21日 星期日 13时49分59秒
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    int y, op;
    cin >> y;
    op = y % 12;
    switch (op) {
        case 4:cout << "rat";break;
        case 5:cout << "ox";break;
        case 6:cout << "tiger";break;
        case 7:cout << "rabbit";break;
        case 8:cout << "dragon";break;
        case 9:cout << "snake";break;
        case 10:cout << "horse";break;
        case 11:cout << "sheep";break;
        case 0:cout << "monkey";break;
        case 1:cout << "rooster";break;
        case 2:cout << "dog";break;
        case 3:cout << "pig";break;
    }

    return 0;
}
