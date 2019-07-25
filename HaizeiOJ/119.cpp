/*************************************************************************
	> File Name: 119.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年07月21日 星期日 15时28分30秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int y,m,d;
    cin >> y >> m >> d;
    if (d == 1 && m == 1) {
        cout << y - 1 << " " << 12 << " " << 31 << endl;
        cout << y << " " << m << " " << d + 1 << endl;
        return 0;
    } 
    if (d == 31 && m == 12) {
        cout << y << " " << m << " " << d - 1 << endl;
        cout << y + 1 << " " << 1 << " " << 1 << endl;
        return 0;
    }
    int numday, year;
    if ((y % 100 != 0 && y % 4 == 0) || (y % 100 == 0 && y % 400 == 0)) {
        year  = 1;
    } else {
        year  = 0;
    }
    switch(m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:numday = 31;break;
        case 2: numday=(year? 29 : 28);break;
        default:numday = 30;break;
    }
    
    if (d == 1) {
        m -= 1;
        switch(m) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:numday = 31;break;
            case 2: numday=(year? 29 : 28);break;
            default:numday = 30;break;
        }
        cout << y << " " << m << " " << numday << endl;
        cout << y << " " << m + 1 << " " << d + 1 << endl;
        return 0;
    }
    if (d == numday) {
        cout << y << " " << m << " " << d - 1 << endl;
        cout << y << " " << m + 1 << " " << 1 << endl;
        return 0;
    }
    cout << y << " " << m << " " << d - 1 << endl;
    cout << y << " " << m << " "<< d + 1 << endl;
    return 0;
}



    




