/*************************************************************************
	> File Name: 87.cpp
	> Author: liujunming 
	> Mail: 1292917361@qq.com 
	> Created Time: 2019年07月19日 星期五 18时06分35秒
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main () {
    double a, b, c, t;
    double m = 0;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &t);
    
    m = (1.0 - (1 / a + 1 / b) * t) / ((1 / a + 1 / b) - 1 / c) + t ;
    printf("%.2lf", m);

    return 0;
}
