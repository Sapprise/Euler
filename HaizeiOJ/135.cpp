/*************************************************************************
	> File Name: 135.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年08月21日 星期三 15时36分26秒
 ************************************************************************/

#include <iostream>
using namespace std;
void next_day(int *y1, int *m1, int *d1) {
    int y, m, d;
    y = *y1;
    m = *m1;
    d = *d1;
    if (d == 1 && m == 1) {
        d = d + 1;
        *d1 = d;
        //cout << y << " " << m << " " << d + 1 << endl;
        return ;
    } 
    if (d == 31 && m == 12) {
        y += 1;
        m = 1;
        d = 1;
        *y1 = y;
        *m1 = m;
        *d1 = d;
        //cout << y + 1 << " " << 1 << " " << 1 << endl;
        return ;
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
        m += 1;
        d += 1;
        *m1 = m;
        *d1 = d;
        //cout << y << " " << m + 1 << " " << d + 1 << endl;
        return ;
    }
    if (d == numday) {
        m += 1;
        d = 1;
        *m1 = m;
        *d1 = d;
        //cout << y << " " << m + 1 << " " << 1 << endl;
        return ;
    }
    d += 1;
    *d1 = d;
    //cout << y << " " << m << " "<< d + 1 << endl;
    return ;
}

int main() {
    int y, m, d, next;
    cin >> next;
    cin >> y >> m >> d;
    while(next) {
        next_day(&y, &m ,&d);
        next--;
    }
    cout << y << " " << m << " " << d;
    return 0;
}

